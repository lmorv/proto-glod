//Raymarching + shading + surface deformation.

float3 rayOrigin = 1-(viewDir - worldPos); //1-() inverts reversed world orientation.
float3 rayStep = viewDir * -1; // '-1' for correct orientation

float3 lightDirection = normalize(lightPos); // for shading


// DRAW A WOBBLY SPHERE:

for(int i = 0; i < 256; i++)
{
    float displace = sphereCenter + (sin(rayOrigin.x * sin(time)/3) + 
                                     sin(rayOrigin.y * sin(time)/3) +
                                     sin(rayOrigin.z * sin(time)/3));

    float dist = length(rayOrigin - displace) - sphereRadius;

    if(dist < 0.01) 
    {
        //shading:
        float3 normal = normalize(rayOrigin - displace);
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
