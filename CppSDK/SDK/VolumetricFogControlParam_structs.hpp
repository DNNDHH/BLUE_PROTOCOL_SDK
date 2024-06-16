#pragma once

 

// Package: VolumetricFogControlParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct VolumetricFogControlParam.VolumetricFogControlParam
// 0x0028 (0x0028 - 0x0000)
struct FVolumetricFogControlParam final
{
public:
	bool                                          VolumetricFog_6_BD8FEDE34BCAD8CFC3A4F8B53A4159BE;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8971[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScatteringDistribution_14_5597BCED4275CBCF6E2950B411EAB3A1; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 Albedo_18_5BA92540490DC7CA665648B97231C27F;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Emissive_31_707B974E4AB5483E8F184EB5BFA3A9B2;      // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExtinctionScale_20_BCF98A5847246BED7D4148AD624BB715; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ViewDistance_32_A17F347B4D327B9ED5BE78A4EE84BF61;  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StaticLightingScatteringIntensity_26_55125CB8493DCB3F4DDA30AC7D2D6EC6; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FVolumetricFogControlParam) == 0x000004, "Wrong alignment on FVolumetricFogControlParam");
static_assert(sizeof(FVolumetricFogControlParam) == 0x000028, "Wrong size on FVolumetricFogControlParam");
static_assert(offsetof(FVolumetricFogControlParam, VolumetricFog_6_BD8FEDE34BCAD8CFC3A4F8B53A4159BE) == 0x000000, "Member 'FVolumetricFogControlParam::VolumetricFog_6_BD8FEDE34BCAD8CFC3A4F8B53A4159BE' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, ScatteringDistribution_14_5597BCED4275CBCF6E2950B411EAB3A1) == 0x000004, "Member 'FVolumetricFogControlParam::ScatteringDistribution_14_5597BCED4275CBCF6E2950B411EAB3A1' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, Albedo_18_5BA92540490DC7CA665648B97231C27F) == 0x000008, "Member 'FVolumetricFogControlParam::Albedo_18_5BA92540490DC7CA665648B97231C27F' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, Emissive_31_707B974E4AB5483E8F184EB5BFA3A9B2) == 0x00000C, "Member 'FVolumetricFogControlParam::Emissive_31_707B974E4AB5483E8F184EB5BFA3A9B2' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, ExtinctionScale_20_BCF98A5847246BED7D4148AD624BB715) == 0x00001C, "Member 'FVolumetricFogControlParam::ExtinctionScale_20_BCF98A5847246BED7D4148AD624BB715' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, ViewDistance_32_A17F347B4D327B9ED5BE78A4EE84BF61) == 0x000020, "Member 'FVolumetricFogControlParam::ViewDistance_32_A17F347B4D327B9ED5BE78A4EE84BF61' has a wrong offset!");
static_assert(offsetof(FVolumetricFogControlParam, StaticLightingScatteringIntensity_26_55125CB8493DCB3F4DDA30AC7D2D6EC6) == 0x000024, "Member 'FVolumetricFogControlParam::StaticLightingScatteringIntensity_26_55125CB8493DCB3F4DDA30AC7D2D6EC6' has a wrong offset!");

}

