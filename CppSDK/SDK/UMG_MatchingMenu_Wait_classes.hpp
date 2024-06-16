#pragma once

 

// Package: UMG_MatchingMenu_Wait

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C
// 0x0060 (0x02D8 - 0x0278)
class UUMG_MatchingMenu_Wait_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CircleL;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleR;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxMembers;                                        // 0x0298(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MinTxtTime;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NowMembers;                                        // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SecTxtTime;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ForceMatch;                                        // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F2E[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              ForceStartTime;                                    // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              MatchingStartTime;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         PollingInterval;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MatchingMenu_Wait(int32 EntryPoint);
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void RequestClose(const EYesNoDialogResult Result);
	class FText Get_MaxMembers_Text();
	class FText Get_CurrentMembers_Text();
	void UpdateWaitTimer(const struct FTimespan& InTime);
	void UpdateAnimation(const struct FTimespan& InTime);
	void AdvanceMatching(bool* CallApi);
	void ResetParam();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Wait_C">();
	}
	static class UUMG_MatchingMenu_Wait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Wait_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Wait_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Wait_C");
static_assert(sizeof(UUMG_MatchingMenu_Wait_C) == 0x0002D8, "Wrong size on UUMG_MatchingMenu_Wait_C");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_Wait_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, CircleL) == 0x000280, "Member 'UUMG_MatchingMenu_Wait_C::CircleL' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, CircleR) == 0x000288, "Member 'UUMG_MatchingMenu_Wait_C::CircleR' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, CmnBtn16) == 0x000290, "Member 'UUMG_MatchingMenu_Wait_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, MaxMembers) == 0x000298, "Member 'UUMG_MatchingMenu_Wait_C::MaxMembers' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, MinTxtTime) == 0x0002A0, "Member 'UUMG_MatchingMenu_Wait_C::MinTxtTime' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, NowMembers) == 0x0002A8, "Member 'UUMG_MatchingMenu_Wait_C::NowMembers' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, SecTxtTime) == 0x0002B0, "Member 'UUMG_MatchingMenu_Wait_C::SecTxtTime' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, ForceMatch) == 0x0002B8, "Member 'UUMG_MatchingMenu_Wait_C::ForceMatch' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, ForceStartTime) == 0x0002C0, "Member 'UUMG_MatchingMenu_Wait_C::ForceStartTime' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, MatchingStartTime) == 0x0002C8, "Member 'UUMG_MatchingMenu_Wait_C::MatchingStartTime' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Wait_C, PollingInterval) == 0x0002D0, "Member 'UUMG_MatchingMenu_Wait_C::PollingInterval' has a wrong offset!");

}

