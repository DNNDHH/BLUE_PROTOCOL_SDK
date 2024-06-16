#pragma once

 

// Package: UMG_PhotoModeEmotionView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeEmotionView.UMG_PhotoModeEmotionView_C
// 0x0150 (0x03C8 - 0x0278)
class UUMG_PhotoModeEmotionView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_DebugFacialView;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         CategoryList;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EmotionPanel;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        FacialComboBox;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULimitedTimeNotice_C*                   LimitedTimeNotice;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        LipSyncComboBox;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_FacialNext;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_FacialPrev;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBox_CloseEyes;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             SBCheckBox_EnableFacial;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_1;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_2;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_3;                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampCategoryButton_C*                 StampCategoryButton_4;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSliderShort_C*    UMG_PhotoModeControllSliderShort_DebugBlush;       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControllSliderShort_C*    UMG_PhotoModeControllSliderShort_DebugPale;        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EmotionIconScroolBox_C*            WBP_EmotionIconScroolBox;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         EmotionList;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 SelectedEmotion;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EShortcutType                                 RegisterType;                                      // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C9C[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectCategory;                                    // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLimitedTimeGroupInfo>        LimitedTimeGroupList;                              // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRequestEmote;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bEnableRequest;                                    // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9D[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickEnableFacial;                               // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeFacialComboBox;                            // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeBlush;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangePale;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeLipSync;                                   // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeCloseEyes;                                 // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         UpdateTimer;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRequestEmote__DelegateSignature(class FName EmotionId);
	void OnClickEnableFacial__DelegateSignature(bool bIsChecked);
	void OnChangeFacialComboBox__DelegateSignature(ESBFacialType FacialType);
	void OnChangeBlush__DelegateSignature(float Value);
	void OnChangePale__DelegateSignature(float Value);
	void OnChangeLipSync__DelegateSignature(ESBLipSyncType LipSyncType);
	void OnChangeCloseEyes__DelegateSignature(bool bCloseEyes);
	void ExecuteUbergraph_UMG_PhotoModeEmotionView(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__UMG_PhotoModeEmotionView_WBP_EmotionScroolBox_K2Node_ComponentBoundEvent_6_OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem);
	void UpdateEmotionList();
	void OnClickedEvent(int32 Param_Index);
	void CreateCategory();
	void Construct_Emotion();
	void BndEvt__UMG_PhotoModeEmotionView_SBCheckBox_CloseEyes_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__UMG_PhotoModeEmotionView_LipSyncComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void ChangeFacialOption(int32 Param_Index);
	void BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugPale_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__UMG_PhotoModeEmotionView_UMG_PhotoModeControllSliderShort_DebugBlush_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float Value);
	void ConstructFacial();
	void BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__UMG_PhotoModeControllMenu_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_26_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void RefreshFacialView(class USBPhotoModePlayerControlData* Data);
	void CreateEmotionEmotionList();
	void SelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem);
	void UpdateCategory();
	class UWidget* On_FacialComboBox_GenerateWidget_0(const class FString& Item);
	void InitFacialOption();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeEmotionView_C">();
	}
	static class UUMG_PhotoModeEmotionView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeEmotionView_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeEmotionView_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeEmotionView_C");
static_assert(sizeof(UUMG_PhotoModeEmotionView_C) == 0x0003C8, "Wrong size on UUMG_PhotoModeEmotionView_C");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModeEmotionView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, CanvasPanel_DebugFacialView) == 0x000280, "Member 'UUMG_PhotoModeEmotionView_C::CanvasPanel_DebugFacialView' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, CategoryList) == 0x000288, "Member 'UUMG_PhotoModeEmotionView_C::CategoryList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, EmotionPanel) == 0x000290, "Member 'UUMG_PhotoModeEmotionView_C::EmotionPanel' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, FacialComboBox) == 0x000298, "Member 'UUMG_PhotoModeEmotionView_C::FacialComboBox' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, LimitedTimeNotice) == 0x0002A0, "Member 'UUMG_PhotoModeEmotionView_C::LimitedTimeNotice' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, LipSyncComboBox) == 0x0002A8, "Member 'UUMG_PhotoModeEmotionView_C::LipSyncComboBox' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SBButton_FacialNext) == 0x0002B0, "Member 'UUMG_PhotoModeEmotionView_C::SBButton_FacialNext' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SBButton_FacialPrev) == 0x0002B8, "Member 'UUMG_PhotoModeEmotionView_C::SBButton_FacialPrev' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SBCheckBox_CloseEyes) == 0x0002C0, "Member 'UUMG_PhotoModeEmotionView_C::SBCheckBox_CloseEyes' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SBCheckBox_EnableFacial) == 0x0002C8, "Member 'UUMG_PhotoModeEmotionView_C::SBCheckBox_EnableFacial' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, StampCategoryButton) == 0x0002D0, "Member 'UUMG_PhotoModeEmotionView_C::StampCategoryButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, StampCategoryButton_1) == 0x0002D8, "Member 'UUMG_PhotoModeEmotionView_C::StampCategoryButton_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, StampCategoryButton_2) == 0x0002E0, "Member 'UUMG_PhotoModeEmotionView_C::StampCategoryButton_2' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, StampCategoryButton_3) == 0x0002E8, "Member 'UUMG_PhotoModeEmotionView_C::StampCategoryButton_3' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, StampCategoryButton_4) == 0x0002F0, "Member 'UUMG_PhotoModeEmotionView_C::StampCategoryButton_4' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, UMG_PhotoModeControllSliderShort_DebugBlush) == 0x0002F8, "Member 'UUMG_PhotoModeEmotionView_C::UMG_PhotoModeControllSliderShort_DebugBlush' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, UMG_PhotoModeControllSliderShort_DebugPale) == 0x000300, "Member 'UUMG_PhotoModeEmotionView_C::UMG_PhotoModeControllSliderShort_DebugPale' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, WBP_EmotionIconScroolBox) == 0x000308, "Member 'UUMG_PhotoModeEmotionView_C::WBP_EmotionIconScroolBox' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, EmotionList) == 0x000310, "Member 'UUMG_PhotoModeEmotionView_C::EmotionList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SelectedEmotion) == 0x000320, "Member 'UUMG_PhotoModeEmotionView_C::SelectedEmotion' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, RegisterType) == 0x000330, "Member 'UUMG_PhotoModeEmotionView_C::RegisterType' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, SelectCategory) == 0x000334, "Member 'UUMG_PhotoModeEmotionView_C::SelectCategory' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, LimitedTimeGroupList) == 0x000338, "Member 'UUMG_PhotoModeEmotionView_C::LimitedTimeGroupList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnRequestEmote) == 0x000348, "Member 'UUMG_PhotoModeEmotionView_C::OnRequestEmote' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, bEnableRequest) == 0x000358, "Member 'UUMG_PhotoModeEmotionView_C::bEnableRequest' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnClickEnableFacial) == 0x000360, "Member 'UUMG_PhotoModeEmotionView_C::OnClickEnableFacial' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnChangeFacialComboBox) == 0x000370, "Member 'UUMG_PhotoModeEmotionView_C::OnChangeFacialComboBox' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnChangeBlush) == 0x000380, "Member 'UUMG_PhotoModeEmotionView_C::OnChangeBlush' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnChangePale) == 0x000390, "Member 'UUMG_PhotoModeEmotionView_C::OnChangePale' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnChangeLipSync) == 0x0003A0, "Member 'UUMG_PhotoModeEmotionView_C::OnChangeLipSync' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, OnChangeCloseEyes) == 0x0003B0, "Member 'UUMG_PhotoModeEmotionView_C::OnChangeCloseEyes' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeEmotionView_C, UpdateTimer) == 0x0003C0, "Member 'UUMG_PhotoModeEmotionView_C::UpdateTimer' has a wrong offset!");

}

