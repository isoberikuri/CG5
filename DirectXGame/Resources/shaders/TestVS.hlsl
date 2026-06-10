//float4 main( float4 pos : POSITION ) : SV_POSITION
//{
//	return pos;
//}

struct VertexShaderOutput
{
    float4 poition : SV_POSITION;
};

struct VertexShaderInput
{
    float4 position : POSITION0;
};

VertexShaderOutput main( VertexShaderInput input )
{
    VertexShaderOutput output;
    output.poition = input.position;
    return output;
}

