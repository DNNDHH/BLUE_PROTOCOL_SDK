#pragma once

 

// Package: WBP_ScbPopupButtonParts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C
// 0x00C0 (0x0338 - 0x0278)
class UWBP_ScbPopupButtonParts_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SB_Star00;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star01;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star02;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star03;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star04;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star05;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star06;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star07;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star08;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Star09;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ScbPopup;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_0;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_1;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_2;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_3;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_4;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_5;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_6;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_7;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_8;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopStar_C*                           TelopStar_9;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedScbPopup;                                 // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickedScbPopup__DelegateSignature();
	void ExecuteUbergraph_WBP_ScbPopupButtonParts(int32 EntryPoint);
	void BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetupExpertRank(int32 InCurrRank, int32 InMaxRank);
	void SetEnableButton(bool bInIsEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ScbPopupButtonParts_C">();
	}
	static class UWBP_ScbPopupButtonParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ScbPopupButtonParts_C>();
	}
};
static_assert(alignof(UWBP_ScbPopupButtonParts_C) == 0x000008, "Wrong alignment on UWBP_ScbPopupButtonParts_C");
static_assert(sizeof(UWBP_ScbPopupButtonParts_C) == 0x000338, "Wrong size on UWBP_ScbPopupButtonParts_C");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ScbPopupButtonParts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star00) == 0x000280, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star00' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star01) == 0x000288, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star01' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star02) == 0x000290, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star02' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star03) == 0x000298, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star03' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star04) == 0x0002A0, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star04' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star05) == 0x0002A8, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star05' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star06) == 0x0002B0, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star06' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star07) == 0x0002B8, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star07' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star08) == 0x0002C0, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star08' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SB_Star09) == 0x0002C8, "Member 'UWBP_ScbPopupButtonParts_C::SB_Star09' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, SBButton_ScbPopup) == 0x0002D0, "Member 'UWBP_ScbPopupButtonParts_C::SBButton_ScbPopup' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_0) == 0x0002D8, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_0' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_1) == 0x0002E0, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_1' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_2) == 0x0002E8, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_2' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_3) == 0x0002F0, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_3' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_4) == 0x0002F8, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_4' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_5) == 0x000300, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_5' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_6) == 0x000308, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_6' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_7) == 0x000310, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_7' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_8) == 0x000318, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_8' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, TelopStar_9) == 0x000320, "Member 'UWBP_ScbPopupButtonParts_C::TelopStar_9' has a wrong offset!");
static_assert(offsetof(UWBP_ScbPopupButtonParts_C, OnClickedScbPopup) == 0x000328, "Member 'UWBP_ScbPopupButtonParts_C::OnClickedScbPopup' has a wrong offset!");

}

