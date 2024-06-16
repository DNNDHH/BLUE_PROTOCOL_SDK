#pragma once

 

// Package: UMG_AdventurerRank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_AdventurerRank.UMG_AdventurerRank_C
// 0x0040 (0x02F0 - 0x02B0)
class UUMG_AdventurerRank_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAdventurerRankCommonInfo_C*            AdventurerRankCommonInfo;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack_1;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSubMenuChanged;                                  // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnIsCmnBackBtnVisible;                             // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSubMenuChanged__DelegateSignature(int32 Param_Index);
	void OnIsCmnBackBtnVisible__DelegateSignature(bool InIsVisible);
	void ExecuteUbergraph_UMG_AdventurerRank(int32 EntryPoint);
	void BndEvt__UMG_AdventurerRank_CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Reset();
	void OnPress_Cancel();
	void OnDetailsMode_Event(bool IsDetailed);
	void OnAdventureBoardBtn_Event();
	void Destruct();
	void Construct();
	void InAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_AdventurerRank_C">();
	}
	static class UUMG_AdventurerRank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_AdventurerRank_C>();
	}
};
static_assert(alignof(UUMG_AdventurerRank_C) == 0x000008, "Wrong alignment on UUMG_AdventurerRank_C");
static_assert(sizeof(UUMG_AdventurerRank_C) == 0x0002F0, "Wrong size on UUMG_AdventurerRank_C");
static_assert(offsetof(UUMG_AdventurerRank_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_AdventurerRank_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_C, AdventurerRankCommonInfo) == 0x0002B8, "Member 'UUMG_AdventurerRank_C::AdventurerRankCommonInfo' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_C, CmnBtnBack_1) == 0x0002C0, "Member 'UUMG_AdventurerRank_C::CmnBtnBack_1' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_C, UIBlocker) == 0x0002C8, "Member 'UUMG_AdventurerRank_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_C, OnSubMenuChanged) == 0x0002D0, "Member 'UUMG_AdventurerRank_C::OnSubMenuChanged' has a wrong offset!");
static_assert(offsetof(UUMG_AdventurerRank_C, OnIsCmnBackBtnVisible) == 0x0002E0, "Member 'UUMG_AdventurerRank_C::OnIsCmnBackBtnVisible' has a wrong offset!");

}

