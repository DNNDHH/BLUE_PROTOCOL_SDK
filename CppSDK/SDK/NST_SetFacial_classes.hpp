#pragma once

 

// Package: NST_SetFacial

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NST_SetFacial.NST_SetFacial_C
// 0x0070 (0x0130 - 0x00C0)
class UNST_SetFacial_C final : public USBAnimNotifyState
{
public:
	ESBFacialType                                 SetFacial;                                         // 0x00C0(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLipSyncType                                Set_LipSyncType;                                   // 0x00C1(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AEE[0x2];                                     // 0x00C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LipSyncSpeed;                                      // 0x00C4(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EyeClose;                                          // 0x00C8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AEF[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBFacialType, float>                    NextFacial;                                        // 0x00D0(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly)
	float                                         Start_BlushAlpha;                                  // 0x0120(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_BlushAlpha;                                    // 0x0124(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Start_PaleAlpha;                                   // 0x0128(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_PaleAlpha;                                     // 0x012C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NST_SetFacial_C">();
	}
	static class UNST_SetFacial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNST_SetFacial_C>();
	}
};
static_assert(alignof(UNST_SetFacial_C) == 0x000008, "Wrong alignment on UNST_SetFacial_C");
static_assert(sizeof(UNST_SetFacial_C) == 0x000130, "Wrong size on UNST_SetFacial_C");
static_assert(offsetof(UNST_SetFacial_C, SetFacial) == 0x0000C0, "Member 'UNST_SetFacial_C::SetFacial' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, Set_LipSyncType) == 0x0000C1, "Member 'UNST_SetFacial_C::Set_LipSyncType' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, LipSyncSpeed) == 0x0000C4, "Member 'UNST_SetFacial_C::LipSyncSpeed' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, EyeClose) == 0x0000C8, "Member 'UNST_SetFacial_C::EyeClose' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, NextFacial) == 0x0000D0, "Member 'UNST_SetFacial_C::NextFacial' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, Start_BlushAlpha) == 0x000120, "Member 'UNST_SetFacial_C::Start_BlushAlpha' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, End_BlushAlpha) == 0x000124, "Member 'UNST_SetFacial_C::End_BlushAlpha' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, Start_PaleAlpha) == 0x000128, "Member 'UNST_SetFacial_C::Start_PaleAlpha' has a wrong offset!");
static_assert(offsetof(UNST_SetFacial_C, End_PaleAlpha) == 0x00012C, "Member 'UNST_SetFacial_C::End_PaleAlpha' has a wrong offset!");

}

