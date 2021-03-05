// Made by IEdge, credits to 'I don't remember the guy but thank you!' by original BaseGround shader.

Shader "Pokémon LG/BaseGround Specular"
{
	Properties
	{
		[Header(BASE PROPERTIES)]
		[KeywordEnum(uv1,uv2,uv3)] _GroundUVSet("Ground UV Set", Float) = 0
		[KeywordEnum(uv1,uv2,uv3)] _TransitionUVSet("Transition UV Set", Float) = 2
		_HColor("Highlight Color", Color) = (0.8627451, 0.8627451, 0.8627451, 1.0)
		_TransitionColor("Transition Color", Color) = (0, 0.2941067, 0.6509434, 1.0)
		
		[Header(TEXTURES)]
		_TexA("Texure A", 2D) = "white" {}
		_TexB("Texure B", 2D) = "white" {}
		_TexC("Texure C", 2D) = "white" {}
		_TexD("Texure D", 2D) = "white" {}
		_TexNoise("Noise", 2D) = "white" {}
		_TexTransition("Transition", 2D) = "white" {}

		[HideInInspector] _texcoord1("", 2D) = "white" {}
		[HideInInspector] _texcoord2("", 2D) = "white" {}
		[HideInInspector] _texcoord3("", 2D) = "white" {}
	}

	SubShader
	{
		Tags{ "RenderType" = "Opaque"  "Queue" = "Geometry+0" }
		LOD 100
		Cull Back

		CGPROGRAM
		#pragma target 3.0
		#pragma shader_feature _GROUNDUVSET_UV2 _GROUNDUVSET_UV3 _TRANSITIONUVSET_UV2 _TRANSITIONUVSET_UV3
		#pragma surface surf StandardSpecular keepalpha addshadow fullforwardshadows exclude_path:deferred 
		
		struct Input
		{
			float2 uv_texcoord1;
			float2 uv2_texcoord2;
			float2 uv3_texcoord3;
		};

		sampler2D _TexA;
		sampler2D _TexB;
		sampler2D _TexC;
		sampler2D _TexD;
		sampler2D _TexNoise;
		sampler2D _TexTransition;
        float4 _HColor;
        float4 _TransitionColor;

		float4 merge(float4 a, float4 b, float4 c)
		{
			return a * (b - c) + c;
		}

		void surf(Input i , inout SurfaceOutputStandardSpecular o)
		{
			#if defined(_GROUNDUVSET_UV2)
				float2 ground_uv = i.uv2_texcoord2;
			#elif defined(_GROUNDUVSET_UV3)
				float2 ground_uv = i.uv3_texcoord3;
			#else
				float2 ground_uv = i.uv_texcoord1;
			#endif
			
			#if defined(_TRANSITIONUVSET_UV2)
				float2 transition_uv = i.uv2_texcoord2;
			#elif defined(_TRANSITIONUVSET_UV3)
				float2 transition_uv = i.uv3_texcoord3;
			#else
				float2 transition_uv = i.uv3_texcoord3;
			#endif

			float4 tex_a = tex2D(_TexA, ground_uv);
			float4 tex_b = tex2D(_TexB, ground_uv);
			float4 tex_c = tex2D(_TexC, ground_uv);
			float4 tex_d = tex2D(_TexD, ground_uv);
			float4 tex_n = tex2D(_TexNoise, ground_uv);
			float4 tex_t = tex2D(_TexTransition, transition_uv);
			float4 t_intensity = lerp(_TransitionColor, 1, tex_t);
			float4 ground_merged = tex_t * merge(tex_t.a, merge(tex_n, tex_a, tex_b), merge(tex_n, tex_c, tex_d));
			
			o.Albedo = (ground_merged * t_intensity * _HColor).xyz;
			o.Alpha = 1;
		}

		ENDCG
	}
	Fallback "Diffuse"
}
