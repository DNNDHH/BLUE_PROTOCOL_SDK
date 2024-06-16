#pragma once

 

// Package: ScriptSubActorData

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct ScriptSubActorData.ScriptSubActorData
// 0x0088 (0x0088 - 0x0000)
struct FScriptSubActorData final
{
public:
	struct FDataTableRowHandle                    ProfileId_19_C22FBCD94ECFC59546C3B386B4DF9382;     // 0x0000(0x0010)(Edit, BlueprintVisible, NoDestructor)
	TSoftClassPtr<class UClass>                   CharacterAsset_6_F981DB5D421104E9F136F3A09297C78A; // 0x0010(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class USBCharaCreateData>      CharacterCreateData_11_D2E56EFE412965E699C5A5B7E46DDF6A; // 0x0038(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UASAnimationSet>         AnimationSet_22_1A87F1FF4C37DB68F92E4F904BF3831D;  // 0x0060(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FScriptSubActorData) == 0x000008, "Wrong alignment on FScriptSubActorData");
static_assert(sizeof(FScriptSubActorData) == 0x000088, "Wrong size on FScriptSubActorData");
static_assert(offsetof(FScriptSubActorData, ProfileId_19_C22FBCD94ECFC59546C3B386B4DF9382) == 0x000000, "Member 'FScriptSubActorData::ProfileId_19_C22FBCD94ECFC59546C3B386B4DF9382' has a wrong offset!");
static_assert(offsetof(FScriptSubActorData, CharacterAsset_6_F981DB5D421104E9F136F3A09297C78A) == 0x000010, "Member 'FScriptSubActorData::CharacterAsset_6_F981DB5D421104E9F136F3A09297C78A' has a wrong offset!");
static_assert(offsetof(FScriptSubActorData, CharacterCreateData_11_D2E56EFE412965E699C5A5B7E46DDF6A) == 0x000038, "Member 'FScriptSubActorData::CharacterCreateData_11_D2E56EFE412965E699C5A5B7E46DDF6A' has a wrong offset!");
static_assert(offsetof(FScriptSubActorData, AnimationSet_22_1A87F1FF4C37DB68F92E4F904BF3831D) == 0x000060, "Member 'FScriptSubActorData::AnimationSet_22_1A87F1FF4C37DB68F92E4F904BF3831D' has a wrong offset!");

}

