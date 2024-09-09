#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass CmnCostume.CmnCostume_C
	 * Size -> 0x0521 (FullSize[0x0799] - InheritedSize[0x0278])
	 */
	class UCmnCostume_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimationScaling;                                        // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_PlayerCaptureControlAtZoomIn_L;                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PlayerCaptureControlAtZoomIn_S;                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PlayerCaptureControlAtZoomOut_L;                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PlayerCaptureControlAtZoomOut_S;                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_PlayerCapture_L;                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_PlayerCapture_S;                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtnOnOff01_C*                                    CmnBtnOnOff01_L;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtnOnOff01_C*                                    CmnBtnOnOff01_S;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate_PlayerCapture_L;                      // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_PlayerCapture_L;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_PlayerCapture_S;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_PosingSwitchButtonGrp_L;                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Panel_PosingSwitchButtonGrp_S;                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         PosingSwitchBtn_L;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         PosingSwitchBtn_L_2;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         PosingSwitchBtn_R;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         PosingSwitchBtn_R_2;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ZoomInPlayerCapture;                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ZoomInPlayerCapture_2;                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ZoomOutPlayerCapture;                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_ZoomOutPlayerCapture_L;                         // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnOnOff01_C*                           SBTextButtonCmnOnOff01_ResetTrying_L;                    // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBTextButtonCmnOnOff01_C*                           SBTextButtonCmnOnOff01_ResetTrying_S;                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_1;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_PlayerSceneCapture2D_Studio_C*                   PlayerCaptureStudio;                                     // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBCharaCreateParameter                             BaseCharaParam;                                          // 0x0350(0x03C0) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnCreatePlayerCapture;                                   // 0x0710(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickZoomIn;                                           // 0x0720(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClickZoomOut;                                          // 0x0730(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTrying;                                                // 0x0740(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBMasterCostume>                            TryingCostumeList;                                       // 0x0750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      TryingCostumeUniqueIdList;                               // 0x0760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsGrandchild;                                           // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZIBO[0x3];                                   // 0x0771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DesignType;                                              // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LayoutType;                                              // 0x0778(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCustomZoomProc;                                         // 0x0780(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J0XB[0x7];                                   // 0x0781(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharaEquipInfo                                     BaseEquipInfo;                                           // 0x0788(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsActiveBaseEquip;                                      // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void RefreshCharaCreateParameter();
		void SetButtonPosition_Posing(EShopType ShopType);
		void IsOccupiedTryingLocationByCostumeId(int32_t CostumeId, bool* IsValid, bool* IsOccupied, struct FSBMasterCostume* MasterCostume);
		void IsOccupiedTryingLocation(EProtectorCategory ProtectorCategory, bool* IsOccupied, struct FSBMasterCostume* MasterCostume);
		void ApplyTryingCostumeData();
		void ApplyBaseEquip();
		void OccupTryingLocationByMasterCostume(const struct FSBMasterCostume& MasterCostume);
		void OccupTryingLocation(EProtectorCategory ProtectorCategory);
		void RemoveTryingCostume(const struct FSBMasterCostume& MasterCostume);
		void AddTryingCosutume(const struct FSBMasterCostume& MasterCostume, const class FString& UniqueId);
		void InitBaseData();
		bool IsValidCosutumeData(const struct FSBMasterCostume& CostumeData);
		void SetVisibleIfValidCostumeData(const struct FSBMasterCostume& CostumeData, bool* bVisible);
		void SetVisible(bool bInIsVisible, bool bForceLightVisible);
		void ResetTryingData(bool bUpdateCapture);
		void UpdateCapture();
		void SetTryingCostume(const struct FSBMasterCostume& CostumeData, const class FString& UniqueId, bool bTrying, bool bUpdateCapture);
		void Construct();
		void Zoom(bool bZoomIn, bool bAnimation);
		void BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void Init(const class FName& LayoutType);
		void BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
		void BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
		void BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CmnCostume(int32_t EntryPoint);
		void OnTrying__DelegateSignature(int32_t ItemIndex, bool bTrying);
		void OnClickZoomOut__DelegateSignature();
		void OnClickZoomIn__DelegateSignature();
		void OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
