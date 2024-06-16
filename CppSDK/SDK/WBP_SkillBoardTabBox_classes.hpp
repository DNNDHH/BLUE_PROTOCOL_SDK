#pragma once

 

// Package: WBP_SkillBoardTabBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C
// 0x0088 (0x0300 - 0x0278)
class UWBP_SkillBoardTabBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SkillBoardTabBox_Banner_C*         Banner_1;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillBoardTabBox_Banner_C*         Banner_2;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SkillBoardTabBox_Banner_C*         Banner_3;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EffectGrp;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Next;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_Prev;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickBanner;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PageMax;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HeaderPageIndex;                                   // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BannerMax;                                         // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectIndex;                                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectBannerId;                                    // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C2A[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SkillBoardTabBox_Banner_C*         SelectBanner;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBClassType>                          ClassList;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_SkillBoardTabBox_Banner_C*> TagList;                                           // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnClickBanner__DelegateSignature(ESBClassType Typr);
	void ExecuteUbergraph_WBP_SkillBoardTabBox(int32 EntryPoint);
	void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_20_OnUnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_19_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_3_K2Node_ComponentBoundEvent_18_OnClicked__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_17_OnUnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_2_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_14_OnUnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_12_OnHovered__DelegateSignature();
	void BndEvt__WBP_SkillBoardTabBox_Banner_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
	void Construct();
	void BndEvt__SBButton_Next_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_Prev_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize();
	void Create_List(TArray<ESBClassType>& EventList);
	void UpdateTabInfo(bool Prev, bool Next, int32 Click);
	void UpdateBannerInfo();
	void SetBannerEnable();
	void SetBannerSelect(class UWBP_SkillBoardTabBox_Banner_C* Banner, bool Force);
	void CheckPagerBtn();
	void Select(ESBClassType& Type);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillBoardTabBox_C">();
	}
	static class UWBP_SkillBoardTabBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillBoardTabBox_C>();
	}
};
static_assert(alignof(UWBP_SkillBoardTabBox_C) == 0x000008, "Wrong alignment on UWBP_SkillBoardTabBox_C");
static_assert(sizeof(UWBP_SkillBoardTabBox_C) == 0x000300, "Wrong size on UWBP_SkillBoardTabBox_C");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillBoardTabBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, Banner_1) == 0x000280, "Member 'UWBP_SkillBoardTabBox_C::Banner_1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, Banner_2) == 0x000288, "Member 'UWBP_SkillBoardTabBox_C::Banner_2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, Banner_3) == 0x000290, "Member 'UWBP_SkillBoardTabBox_C::Banner_3' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, EffectGrp) == 0x000298, "Member 'UWBP_SkillBoardTabBox_C::EffectGrp' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, SBButton_Next) == 0x0002A0, "Member 'UWBP_SkillBoardTabBox_C::SBButton_Next' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, SBButton_Prev) == 0x0002A8, "Member 'UWBP_SkillBoardTabBox_C::SBButton_Prev' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, OnClickBanner) == 0x0002B0, "Member 'UWBP_SkillBoardTabBox_C::OnClickBanner' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, PageMax) == 0x0002C0, "Member 'UWBP_SkillBoardTabBox_C::PageMax' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, HeaderPageIndex) == 0x0002C4, "Member 'UWBP_SkillBoardTabBox_C::HeaderPageIndex' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, BannerMax) == 0x0002C8, "Member 'UWBP_SkillBoardTabBox_C::BannerMax' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, SelectIndex) == 0x0002CC, "Member 'UWBP_SkillBoardTabBox_C::SelectIndex' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, SelectBannerId) == 0x0002D0, "Member 'UWBP_SkillBoardTabBox_C::SelectBannerId' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, SelectBanner) == 0x0002D8, "Member 'UWBP_SkillBoardTabBox_C::SelectBanner' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, ClassList) == 0x0002E0, "Member 'UWBP_SkillBoardTabBox_C::ClassList' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_C, TagList) == 0x0002F0, "Member 'UWBP_SkillBoardTabBox_C::TagList' has a wrong offset!");

}

