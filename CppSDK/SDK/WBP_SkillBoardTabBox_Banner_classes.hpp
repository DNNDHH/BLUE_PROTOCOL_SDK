#pragma once

 

// Package: WBP_SkillBoardTabBox_Banner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillBoardTabBox_Banner.WBP_SkillBoardTabBox_Banner_C
// 0x00F8 (0x0370 - 0x0278)
class UWBP_SkillBoardTabBox_Banner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Zero6;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Zero7;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 One1;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 One2;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 One9;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Two0;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Two1;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Two2;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BaseBG;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ClassIcon;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_black;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBBtn_Hit;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_490;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Name;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   DataTableName;                                     // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TabIndex;                                          // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B41[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EventId;                                           // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B42[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              Banner;                                            // 0x0340(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_SkillBoardTabBox_Banner(int32 EntryPoint);
	void SetClass(ESBClassType Param_ClassType);
	void Init();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBBtn_Hit_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetBtnSelected(bool IsSelect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillBoardTabBox_Banner_C">();
	}
	static class UWBP_SkillBoardTabBox_Banner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillBoardTabBox_Banner_C>();
	}
};
static_assert(alignof(UWBP_SkillBoardTabBox_Banner_C) == 0x000008, "Wrong alignment on UWBP_SkillBoardTabBox_Banner_C");
static_assert(sizeof(UWBP_SkillBoardTabBox_Banner_C) == 0x000370, "Wrong size on UWBP_SkillBoardTabBox_Banner_C");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillBoardTabBox_Banner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Zero6) == 0x000280, "Member 'UWBP_SkillBoardTabBox_Banner_C::Zero6' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Zero7) == 0x000288, "Member 'UWBP_SkillBoardTabBox_Banner_C::Zero7' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, One1) == 0x000290, "Member 'UWBP_SkillBoardTabBox_Banner_C::One1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, One2) == 0x000298, "Member 'UWBP_SkillBoardTabBox_Banner_C::One2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, One9) == 0x0002A0, "Member 'UWBP_SkillBoardTabBox_Banner_C::One9' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Two0) == 0x0002A8, "Member 'UWBP_SkillBoardTabBox_Banner_C::Two0' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Two1) == 0x0002B0, "Member 'UWBP_SkillBoardTabBox_Banner_C::Two1' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Two2) == 0x0002B8, "Member 'UWBP_SkillBoardTabBox_Banner_C::Two2' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, BaseBG) == 0x0002C0, "Member 'UWBP_SkillBoardTabBox_Banner_C::BaseBG' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, ClassIcon) == 0x0002C8, "Member 'UWBP_SkillBoardTabBox_Banner_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Img_black) == 0x0002D0, "Member 'UWBP_SkillBoardTabBox_Banner_C::Img_black' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, SBBtn_Hit) == 0x0002D8, "Member 'UWBP_SkillBoardTabBox_Banner_C::SBBtn_Hit' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, SBRuntimeTextBlock) == 0x0002E0, "Member 'UWBP_SkillBoardTabBox_Banner_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, SBRuntimeTextBlock_490) == 0x0002E8, "Member 'UWBP_SkillBoardTabBox_Banner_C::SBRuntimeTextBlock_490' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, TextBlock_Name) == 0x0002F0, "Member 'UWBP_SkillBoardTabBox_Banner_C::TextBlock_Name' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, OnClicked) == 0x0002F8, "Member 'UWBP_SkillBoardTabBox_Banner_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, DataTableName) == 0x000308, "Member 'UWBP_SkillBoardTabBox_Banner_C::DataTableName' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, TabIndex) == 0x000310, "Member 'UWBP_SkillBoardTabBox_Banner_C::TabIndex' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, OnHovered) == 0x000318, "Member 'UWBP_SkillBoardTabBox_Banner_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, OnUnhovered) == 0x000328, "Member 'UWBP_SkillBoardTabBox_Banner_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, EventId) == 0x000338, "Member 'UWBP_SkillBoardTabBox_Banner_C::EventId' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, Banner) == 0x000340, "Member 'UWBP_SkillBoardTabBox_Banner_C::Banner' has a wrong offset!");
static_assert(offsetof(UWBP_SkillBoardTabBox_Banner_C, ClassType) == 0x000368, "Member 'UWBP_SkillBoardTabBox_Banner_C::ClassType' has a wrong offset!");

}

