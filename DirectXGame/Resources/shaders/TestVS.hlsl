struct VertexShaderOutput
{
    float32_t4 poition : SV_POSITION;
};

struct VertexShaderInput
{
    float32_t4 position : POSITION0;
};

VertexShaderOutput main( VertexShaderInput input )
{
    VertexShaderOutput output;
    output.poition = input.position;
    return output;
}
