// Made with Amplify Shader Editor
// Available at the Unity Asset Store - http://u3d.as/y3X 
Shader "PLGU/Pokemon Eye"
{
	Properties
	{
		_Texture0("Texture 0", 2D) = "white" {}
		_iris("iris", 2D) = "white" {}
		[HideInInspector] _texcoord( "", 2D ) = "white" {}
		[HideInInspector] __dirty( "", Int ) = 1
	}

	SubShader
	{
		Tags{ "RenderType" = "TransparentCutout"  "Queue" = "Geometry+0" }
		Cull Back
		CGPROGRAM
		#pragma target 3.0
		#pragma surface surf Standard keepalpha addshadow fullforwardshadows 
		struct Input
		{
			float2 uv_texcoord;
		};

		uniform sampler2D _Texture0;
		uniform float4 _Texture0_ST;
		uniform sampler2D _iris;
		uniform float4 _iris_ST;

		void surf( Input i , inout SurfaceOutputStandard o )
		{
			float2 temp_cast_0 = (1.0).xx;
			float2 uv_Texture0 = i.uv_texcoord * _Texture0_ST.xy + _Texture0_ST.zw;
			float2 temp_cast_1 = (1.0).xx;
			float4 tex2DNode33 = tex2D( _Texture0, ( temp_cast_0 - abs( ( ( frac( ( uv_Texture0 * 0.5 ) ) * 2.0 ) - temp_cast_1 ) ) ) );
			float2 temp_cast_2 = (1.0).xx;
			float2 uv_iris = i.uv_texcoord * _iris_ST.xy + _iris_ST.zw;
			float2 temp_cast_3 = (1.0).xx;
			float2 temp_output_178_0 = ( temp_cast_2 - abs( ( ( frac( ( uv_iris * 0.5 ) ) * 2.0 ) - temp_cast_3 ) ) );
			o.Albedo = ( tex2DNode33 + ( tex2D( _iris, temp_output_178_0 ) * ( 1.0 - tex2DNode33.a ) ) ).rgb;
			o.Alpha = 1;
		}

		ENDCG
	}
	Fallback "Diffuse"
	CustomEditor "ASEMaterialInspector"
}
/*ASEBEGIN
Version=18500
388;73;829;655;2857.416;1942.965;3.324105;True;False
Node;AmplifyShaderEditor.TexturePropertyNode;4;-3853.064,-1083.813;Inherit;True;Property;_Texture0;Texture 0;1;0;Create;True;0;0;False;0;False;None;None;False;white;Auto;Texture2D;-1;0;2;SAMPLER2D;0;SAMPLERSTATE;1
Node;AmplifyShaderEditor.TextureCoordinatesNode;168;-3448.957,-858.5604;Inherit;True;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;158;-3263.785,-507.2508;Inherit;False;Constant;_Float4;Float 4;1;0;Create;True;0;0;False;0;False;0.5;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.TexturePropertyNode;146;-4250.364,-205.9924;Inherit;True;Property;_iris;iris;2;0;Create;True;0;0;False;0;False;None;None;False;white;Auto;Texture2D;-1;0;2;SAMPLER2D;0;SAMPLERSTATE;1
Node;AmplifyShaderEditor.TextureCoordinatesNode;170;-3681.735,0.1494803;Inherit;True;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.RangedFloatNode;169;-3496.563,351.4591;Inherit;False;Constant;_Float3;Float 3;1;0;Create;True;0;0;False;0;False;0.5;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;166;-3091.224,-793.9772;Inherit;True;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.FractNode;159;-2912.955,-591.4532;Inherit;False;1;0;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;171;-3324.002,64.73274;Inherit;True;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;160;-2941.387,-402.8481;Inherit;False;Constant;_Float1;Float 1;1;0;Create;True;0;0;False;0;False;2;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.RangedFloatNode;173;-3174.165,455.8617;Inherit;False;Constant;_Float2;Float 2;1;0;Create;True;0;0;False;0;False;2;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;162;-2714.289,-579.2532;Inherit;True;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;161;-3215.386,-355.1963;Inherit;False;Constant;_Float6;Float 6;1;0;Create;True;0;0;False;0;False;1;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.FractNode;172;-3145.733,267.2567;Inherit;False;1;0;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;163;-2550.633,-363.7509;Inherit;False;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.RangedFloatNode;174;-3448.164,503.5136;Inherit;False;Constant;_Float5;Float 5;1;0;Create;True;0;0;False;0;False;1;0;0;0;0;1;FLOAT;0
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;175;-2947.067,279.4567;Inherit;True;2;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;176;-2783.411,494.959;Inherit;False;2;0;FLOAT2;0,0;False;1;FLOAT;0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.AbsOpNode;164;-2357.359,-366.717;Inherit;False;1;0;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.AbsOpNode;177;-2590.136,491.9929;Inherit;False;1;0;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;165;-2230.793,-690.386;Inherit;True;2;0;FLOAT;0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleSubtractOpNode;178;-2463.571,168.3239;Inherit;True;2;0;FLOAT;0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SamplerNode;33;-1754.76,-1052.719;Inherit;True;Property;_TextureSample1;Texture Sample 1;1;0;Create;True;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.OneMinusNode;140;-1256.989,-757.9094;Inherit;True;1;0;FLOAT;0;False;1;FLOAT;0
Node;AmplifyShaderEditor.SamplerNode;145;-1772.597,-343.5119;Inherit;True;Property;_TextureSample0;Texture Sample 0;1;0;Create;True;0;0;False;0;False;-1;None;None;True;0;False;white;Auto;False;Object;-1;Auto;Texture2D;8;0;SAMPLER2D;;False;1;FLOAT2;0,0;False;2;FLOAT;0;False;3;FLOAT2;0,0;False;4;FLOAT2;0,0;False;5;FLOAT;1;False;6;FLOAT;0;False;7;SAMPLERSTATE;;False;5;COLOR;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;144;-978.5734,-488.7914;Inherit;True;2;2;0;COLOR;0,0,0,0;False;1;FLOAT;0;False;1;COLOR;0
Node;AmplifyShaderEditor.TextureCoordinatesNode;152;-2044.821,490.7211;Inherit;False;0;-1;2;3;2;SAMPLER2D;;False;0;FLOAT2;1,1;False;1;FLOAT2;0,0;False;5;FLOAT2;0;FLOAT;1;FLOAT;2;FLOAT;3;FLOAT;4
Node;AmplifyShaderEditor.Vector2Node;154;-2325.155,467.7808;Inherit;False;Constant;_Vector0;Vector 0;3;0;Create;True;0;0;False;0;False;2,4;0,0;0;3;FLOAT2;0;FLOAT;1;FLOAT;2
Node;AmplifyShaderEditor.Vector2Node;155;-2295.353,658.1961;Inherit;False;Constant;_Vector1;Vector 1;3;0;Create;True;0;0;False;0;False;0,0;0,0;0;3;FLOAT2;0;FLOAT;1;FLOAT;2
Node;AmplifyShaderEditor.SimpleMultiplyOpNode;179;-1830.669,141.6869;Inherit;False;2;2;0;FLOAT2;0,0;False;1;FLOAT2;0,0;False;1;FLOAT2;0
Node;AmplifyShaderEditor.SimpleAddOpNode;147;-727.3666,-971.2795;Inherit;True;2;2;0;COLOR;0,0,0,0;False;1;COLOR;0,0,0,0;False;1;COLOR;0
Node;AmplifyShaderEditor.StandardSurfaceOutputNode;0;-95.26937,-902.9024;Float;False;True;-1;2;ASEMaterialInspector;0;0;Standard;PLGU/Pokemon Eye;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;False;Back;0;False;-1;0;False;-1;False;0;False;-1;0;False;-1;False;0;Custom;0.5;True;True;0;True;TransparentCutout;;Geometry;All;14;all;True;True;True;True;0;False;-1;False;0;False;-1;255;False;-1;255;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;-1;False;2;15;10;25;False;0.5;True;0;0;False;-1;0;False;-1;0;0;False;-1;0;False;-1;0;False;-1;0;False;-1;0;False;0;0,0,0,0;VertexOffset;True;False;Cylindrical;False;Relative;0;;0;-1;-1;-1;0;False;0;0;False;-1;-1;0;False;-1;0;0;0;False;0.1;False;-1;0;False;-1;False;16;0;FLOAT3;0,0,0;False;1;FLOAT3;0,0,0;False;2;FLOAT3;0,0,0;False;3;FLOAT;0;False;4;FLOAT;0;False;5;FLOAT;0;False;6;FLOAT3;0,0,0;False;7;FLOAT3;0,0,0;False;8;FLOAT;0;False;9;FLOAT;0;False;10;FLOAT;0;False;13;FLOAT3;0,0,0;False;11;FLOAT3;0,0,0;False;12;FLOAT3;0,0,0;False;14;FLOAT4;0,0,0,0;False;15;FLOAT3;0,0,0;False;0
WireConnection;168;2;4;0
WireConnection;170;2;146;0
WireConnection;166;0;168;0
WireConnection;166;1;158;0
WireConnection;159;0;166;0
WireConnection;171;0;170;0
WireConnection;171;1;169;0
WireConnection;162;0;159;0
WireConnection;162;1;160;0
WireConnection;172;0;171;0
WireConnection;163;0;162;0
WireConnection;163;1;161;0
WireConnection;175;0;172;0
WireConnection;175;1;173;0
WireConnection;176;0;175;0
WireConnection;176;1;174;0
WireConnection;164;0;163;0
WireConnection;177;0;176;0
WireConnection;165;0;161;0
WireConnection;165;1;164;0
WireConnection;178;0;174;0
WireConnection;178;1;177;0
WireConnection;33;0;4;0
WireConnection;33;1;165;0
WireConnection;140;0;33;4
WireConnection;145;0;146;0
WireConnection;145;1;178;0
WireConnection;144;0;145;0
WireConnection;144;1;140;0
WireConnection;152;0;154;0
WireConnection;152;1;155;0
WireConnection;179;0;178;0
WireConnection;179;1;152;0
WireConnection;147;0;33;0
WireConnection;147;1;144;0
WireConnection;0;0;147;0
ASEEND*/
//CHKSM=78181C71A275D81D422C79ACED85955DC9A447A9