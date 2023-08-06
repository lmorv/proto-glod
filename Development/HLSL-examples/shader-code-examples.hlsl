//'scanline' color transition:

return(step((ceil(uv*10)/10)-(sin(t)),0.5)); // remove outer step function and ',0.5' value to make a smoother transition 


// Shapes (circles in a grid):
float d = length(pos-frac(uv*gridSize));
return d <= radius;

// brick generator:
float2 tex = frac(float2(uv.x * grid.x + offset.x, uv.y * grid.y + offset.y));

if(tex.x >= dim.x || tex.x <= -dim.x ||
    tex.y >= dim.y || tex.y <= -dim.y) 
    return(colMortar);


return(colBrick);

// Loops (circles):

float result = 0;

for(int i = 0; i < nSides; i++)
{
    for (int j = 0; j < nCopies; j++)
    {
        float angle = (i / nSides) * (time) * 3.14;
        float2 pos = center + (j / nCopies) * radius * float2(cos(1-angle), sin(3*angle));
        result += length(pos-uv) < size; // Draw circle
    }
}

return(result);

// Movement color:

float result = 0;

for(int i = 0; i < nSides; i++)
{
    for(int j = 0; j < nCopies; j++)
    {
        float angle = (i / nSides) * sin(time * 2) * (3.14 * 2);
        float2 pos = center + (j / nCopies) * radius * float2(sin(1-angle) - sin(time), 
                                                              cos(1-angle) - sin(time));

        result += length(pos - uv ) < size;
    }  
}

outEmissive = result * float3(sin(time),0,0.1);
return(result);

// 2D circle & 3D sphere:

2DCircle = length(pos - uv) < size;
3DSphere = length(rayOrigin - sphereCenter) - sphereRadius;

// raymarching code:

float3 rayOrigin = 1-(viewDir - worldPos); //1-() inverts reversed world orientation.
float3 rayStep = viewDir * -1; // '-1' for correct orientation

float3 lightDirection = normalize(lightPos); // for shading


for(int i = 0; i < 256; i++)
{
    float dist = length(rayOrigin - sphereCenter) - sphereRadius;

    if(dist < 0.01) 
    {
        //shading:
        float3 normal = normalize(rayOrigin - sphereCenter);
        float diffuse = max(dot(normal, lightDirection),0);
        float3 reflection = reflect(lightDirection, normal);
        float3 viewDirection = normalize(-worldPos - rayOrigin);
        float specular = pow(max(dot(reflection, viewDirection), 0), 16); // exponent power controlls intensity of the higlight, curretly 16

        return (diffuse * float3(1,0,0)) + (specular * float3(1,1,1));
    }

    opacityMask = 1;
    rayOrigin += rayStep;
}

opacityMask = 0; // used to hide pixels not within the drawn shape
return float3(0,0,0);
