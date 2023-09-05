float3 rayStep = viewDir * -1; // for Raymarching
float4 color;

struct texDistort
{
    float2 textScale(float2 uv, float2 scale)
    {
        float2 texScale = (uv - 0.5) * scale + 0.5; // .5 value is to scale from center of texture (0,0 would be top left corner)
        return texScale;
    }

    float2 texRotate(float2 uv, float angle)
    {
        float2x2 rotationMatrix = float2x2(cos(angle), sin(angle),
                                            -sin(angle), cos(angle)); // swapping signs of middle values changes rotation direction float2x2(a, -b, c, d) & float2x2(a, b, -c, d)
        return mul(uv - 0.5, rotationMatrix) + 0.5;
    }

    float2 texDistortion(float2 uv, float time)
    {
        float angle = atan2(uv.y - 0.5, uv.x - 05); // angle from uv coord to center of uv space
        float radius = length(uv - 0.5); // distance from uv coord to center of uv space

        // float magnitude = 4;
        // float frequency = 3;
        // float speed = 2;

        float distortion = 4 * sin(3 * radius + 2 * time); // sin wave distortion by a magnitude, frequency and speed value.
        float primDist = sin(6.0 * angle) * distortion; // secon layer of distortion. 6.0 is an intensity value

        return texRotate(uv, primDist);
    }
};
texDistort txd; // Give the struct a propper name

for (int i = 0; i < 5; i++)
{
    color = Texture2DSampler(texObject, texObjectSampler, txd.texDistortion(uv, time));

    if(color.r > 0.1 && color.g > 0.1 && color.b > 0.1)
    {
        return color * float3(1,0,0); // color multiplied by a red value
    }
    else if(color.r > 0.1 && color.g > 0.1 && color.b > 0.1)
    {   
        return color * float3(0,1,1); // Color multiplied by green/blue value
    }

    uv += rayStep * 1.5;
}

return(color);