#pragma once

 

// Package: ScriptParticleData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ScriptParticleData.ScriptParticleData
// 0x0028 (0x0028 - 0x0000)
struct FScriptParticleData final
{
public:
	TSoftObjectPtr<class UParticleSystem>         ParticleAsset_2_AC50006A4D58A29A0C52A5ADA776B612;  // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FScriptParticleData) == 0x000008, "Wrong alignment on FScriptParticleData");
static_assert(sizeof(FScriptParticleData) == 0x000028, "Wrong size on FScriptParticleData");
static_assert(offsetof(FScriptParticleData, ParticleAsset_2_AC50006A4D58A29A0C52A5ADA776B612) == 0x000000, "Member 'FScriptParticleData::ParticleAsset_2_AC50006A4D58A29A0C52A5ADA776B612' has a wrong offset!");

}

