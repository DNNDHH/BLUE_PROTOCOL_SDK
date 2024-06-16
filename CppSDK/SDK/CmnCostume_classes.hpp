#pragma once

 

// Package: CmnCostume

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnCostume.CmnCostume_C
// 0x0528 (0x07A0 - 0x0278)
class UCmnCostume_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimationScaling;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerCaptureControlAtZoomIn_L;             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerCaptureControlAtZoomIn_S;             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerCaptureControlAtZoomOut_L;            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_PlayerCaptureControlAtZoomOut_S;            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PlayerCapture_L;                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_PlayerCapture_S;                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtnOnOff01_C*                       CmnBtnOnOff01_L;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtnOnOff01_C*                       CmnBtnOnOff01_S;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate_PlayerCapture_L;                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlayerCapture_L;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlayerCapture_S;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel_PosingSwitchButtonGrp_L;                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Panel_PosingSwitchButtonGrp_S;                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PosingSwitchBtn_L;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PosingSwitchBtn_L_1;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PosingSwitchBtn_R;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PosingSwitchBtn_R_1;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomInPlayerCapture;                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomInPlayerCapture_1;                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomOutPlayerCapture;                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomOutPlayerCapture_L;                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnOnOff01_C*              SBTextButtonCmnOnOff01_ResetTrying_L;              // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButtonCmnOnOff01_C*              SBTextButtonCmnOnOff01_ResetTrying_S;              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_PlayerSceneCapture2D_Studio_C*      PlayerCaptureStudio;                               // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharaCreateParameter                BaseCharaParam;                                    // 0x0350(0x03C0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnCreatePlayerCapture;                             // 0x0710(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickZoomIn;                                     // 0x0720(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickZoomOut;                                    // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTrying;                                          // 0x0740(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBMasterCostume>               TryingCostumeList;                                 // 0x0750(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TryingCostumeUniqueIdList;                         // 0x0760(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsGrandchild;                                     // 0x0770(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E6[0x3];                                     // 0x0771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DesignType;                                        // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LayoutType;                                        // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCustomZoomProc;                                   // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E7[0x7];                                     // 0x0781(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        BaseEquipInfo;                                     // 0x0788(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsActiveBaseEquip;                                // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture);
	void OnClickZoomIn__DelegateSignature();
	void OnClickZoomOut__DelegateSignature();
	void OnTrying__DelegateSignature(int32 ItemIndex, bool bTrying);
	void ExecuteUbergraph_CmnCostume(int32 EntryPoint);
	void BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void Init(class FName Param_LayoutType);
	void BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Zoom(bool bZoomIn, bool bAnimation);
	void Construct();
	void SetTryingCostume(const struct FSBMasterCostume& CostumeData, const class FString& UniqueId, bool bTrying, bool bUpdateCapture);
	void UpdateCapture();
	void ResetTryingData(bool bUpdateCapture);
	void SetVisible(bool bInIsVisible, bool bForceLightVisible);
	void SetVisibleIfValidCostumeData(const struct FSBMasterCostume& CostumeData, bool* bVisible);
	bool IsValidCosutumeData(const struct FSBMasterCostume& CostumeData);
	void InitBaseData();
	void AddTryingCosutume(const struct FSBMasterCostume& MasterCostume, const class FString& UniqueId);
	void RemoveTryingCostume(const struct FSBMasterCostume& MasterCostume);
	void OccupTryingLocation(const EProtectorCategory& ProtectorCategory);
	void OccupTryingLocationByMasterCostume(const struct FSBMasterCostume& MasterCostume);
	void ApplyBaseEquip();
	void ApplyTryingCostumeData();
	void IsOccupiedTryingLocation(const EProtectorCategory& ProtectorCategory, bool* IsOccupied, struct FSBMasterCostume* MasterCostume);
	void IsOccupiedTryingLocationByCostumeId(int32 CostumeId, bool* IsValid, bool* IsOccupied, struct FSBMasterCostume* MasterCostume);
	void SetButtonPosition_Posing(EShopType ShopType);
	void RefreshCharaCreateParameter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnCostume_C">();
	}
	static class UCmnCostume_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnCostume_C>();
	}
};
static_assert(alignof(UCmnCostume_C) == 0x000008, "Wrong alignment on UCmnCostume_C");
static_assert(sizeof(UCmnCostume_C) == 0x0007A0, "Wrong size on UCmnCostume_C");
static_assert(offsetof(UCmnCostume_C, UberGraphFrame) == 0x000278, "Member 'UCmnCostume_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, AnimationScaling) == 0x000280, "Member 'UCmnCostume_C::AnimationScaling' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Border_PlayerCaptureControlAtZoomIn_L) == 0x000288, "Member 'UCmnCostume_C::Border_PlayerCaptureControlAtZoomIn_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Border_PlayerCaptureControlAtZoomIn_S) == 0x000290, "Member 'UCmnCostume_C::Border_PlayerCaptureControlAtZoomIn_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Border_PlayerCaptureControlAtZoomOut_L) == 0x000298, "Member 'UCmnCostume_C::Border_PlayerCaptureControlAtZoomOut_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Border_PlayerCaptureControlAtZoomOut_S) == 0x0002A0, "Member 'UCmnCostume_C::Border_PlayerCaptureControlAtZoomOut_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, CanvasPanel_PlayerCapture_L) == 0x0002A8, "Member 'UCmnCostume_C::CanvasPanel_PlayerCapture_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, CanvasPanel_PlayerCapture_S) == 0x0002B0, "Member 'UCmnCostume_C::CanvasPanel_PlayerCapture_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, CmnBtnOnOff01_L) == 0x0002B8, "Member 'UCmnCostume_C::CmnBtnOnOff01_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, CmnBtnOnOff01_S) == 0x0002C0, "Member 'UCmnCostume_C::CmnBtnOnOff01_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, CmnOperationRotate_PlayerCapture_L) == 0x0002C8, "Member 'UCmnCostume_C::CmnOperationRotate_PlayerCapture_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Image_PlayerCapture_L) == 0x0002D0, "Member 'UCmnCostume_C::Image_PlayerCapture_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Image_PlayerCapture_S) == 0x0002D8, "Member 'UCmnCostume_C::Image_PlayerCapture_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Panel_PosingSwitchButtonGrp_L) == 0x0002E0, "Member 'UCmnCostume_C::Panel_PosingSwitchButtonGrp_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, Panel_PosingSwitchButtonGrp_S) == 0x0002E8, "Member 'UCmnCostume_C::Panel_PosingSwitchButtonGrp_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, PosingSwitchBtn_L) == 0x0002F0, "Member 'UCmnCostume_C::PosingSwitchBtn_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, PosingSwitchBtn_L_1) == 0x0002F8, "Member 'UCmnCostume_C::PosingSwitchBtn_L_1' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, PosingSwitchBtn_R) == 0x000300, "Member 'UCmnCostume_C::PosingSwitchBtn_R' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, PosingSwitchBtn_R_1) == 0x000308, "Member 'UCmnCostume_C::PosingSwitchBtn_R_1' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBButton_ZoomInPlayerCapture) == 0x000310, "Member 'UCmnCostume_C::SBButton_ZoomInPlayerCapture' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBButton_ZoomInPlayerCapture_1) == 0x000318, "Member 'UCmnCostume_C::SBButton_ZoomInPlayerCapture_1' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBButton_ZoomOutPlayerCapture) == 0x000320, "Member 'UCmnCostume_C::SBButton_ZoomOutPlayerCapture' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBButton_ZoomOutPlayerCapture_L) == 0x000328, "Member 'UCmnCostume_C::SBButton_ZoomOutPlayerCapture_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBTextButtonCmnOnOff01_ResetTrying_L) == 0x000330, "Member 'UCmnCostume_C::SBTextButtonCmnOnOff01_ResetTrying_L' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, SBTextButtonCmnOnOff01_ResetTrying_S) == 0x000338, "Member 'UCmnCostume_C::SBTextButtonCmnOnOff01_ResetTrying_S' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, WidgetSwitcher_0) == 0x000340, "Member 'UCmnCostume_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, PlayerCaptureStudio) == 0x000348, "Member 'UCmnCostume_C::PlayerCaptureStudio' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, BaseCharaParam) == 0x000350, "Member 'UCmnCostume_C::BaseCharaParam' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, OnCreatePlayerCapture) == 0x000710, "Member 'UCmnCostume_C::OnCreatePlayerCapture' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, OnClickZoomIn) == 0x000720, "Member 'UCmnCostume_C::OnClickZoomIn' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, OnClickZoomOut) == 0x000730, "Member 'UCmnCostume_C::OnClickZoomOut' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, OnTrying) == 0x000740, "Member 'UCmnCostume_C::OnTrying' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, TryingCostumeList) == 0x000750, "Member 'UCmnCostume_C::TryingCostumeList' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, TryingCostumeUniqueIdList) == 0x000760, "Member 'UCmnCostume_C::TryingCostumeUniqueIdList' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, bIsGrandchild) == 0x000770, "Member 'UCmnCostume_C::bIsGrandchild' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, DesignType) == 0x000774, "Member 'UCmnCostume_C::DesignType' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, LayoutType) == 0x000778, "Member 'UCmnCostume_C::LayoutType' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, bCustomZoomProc) == 0x000780, "Member 'UCmnCostume_C::bCustomZoomProc' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, BaseEquipInfo) == 0x000788, "Member 'UCmnCostume_C::BaseEquipInfo' has a wrong offset!");
static_assert(offsetof(UCmnCostume_C, bIsActiveBaseEquip) == 0x000798, "Member 'UCmnCostume_C::bIsActiveBaseEquip' has a wrong offset!");

}

