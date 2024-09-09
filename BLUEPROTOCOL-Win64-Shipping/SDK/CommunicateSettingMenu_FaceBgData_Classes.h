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
	 * WidgetBlueprintGeneratedClass CommunicateSettingMenu_FaceBgData.CommunicateSettingMenu_FaceBgData_C
	 * Size -> 0x00A8 (FullSize[0x0320] - InheritedSize[0x0278])
	 */
	class UCommunicateSettingMenu_FaceBgData_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              AdventerRankBg;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        AdventurerRank;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CharacterDecoFrame;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_ClassData_C*                 CommunicateSettingMenu_ClassData;                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_FaceBg_C*                    CommunicateSettingMenu_FaceBg;                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TotalPowerGrp;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtAdventurerRank;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtTotalPower;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 UserName;                                                // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickedBtnAwardItemIconList;                             // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsAdventurerRankAndTotalPowerVisible;                   // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_K1SI[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickEvent;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsCharacterCard;                                        // 0x02F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HA9L[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHover;                                                 // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhover;                                               // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetAdventurerRankAndTotalPowerVisibility(bool bInIsVisible);
		void OnLoaded_32E5319F4F1A48F55A11A1BB2ABB84D7(class UObject* Loaded);
		void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_2_OnClickEvent__DelegateSignature();
		void SetCharacterCardData(const struct FSBPlayerCharacterCardData& InPlayerCharacterCardData, bool bIsUGC);
		void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_5_OnHover__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_6_OnUnhver__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__CommunicateSettingMenu_FaceBgData_SBButton_C_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void SetFaceBG(float InScale, const struct FVector2D& InPosition, const class FString& URL);
		void ResetFaceBG();
		void SetAdventureRank();
		void SetTotalPower();
		void SetClassData(ESBClassType InCurrentClassType, int32_t InClassLevel, TArray<int32_t> InAwardIdList);
		void SetAdventureData();
		void SetTotalPowerText(int32_t Value);
		void SetClassType(ESBClassType InClassType, TArray<int32_t> InAwardIdList);
		void SetAdventureRankText(int32_t Value);
		void ErrorDataSet();
		void SetFrame(int32_t InCharacterCardFrameId);
		void BndEvt__CommunicateSettingMenu_FaceBgData_CommunicateSettingMenu_ClassData_K2Node_ComponentBoundEvent_0_ClickedBtnAwardIconItemList__DelegateSignature(int32_t AwardId);
		void PreConstruct(bool IsDesignTime);
		void EditFrame_AwardIconDisable();
		void SetAwardId(TArray<int32_t> InAwardIdList);
		void Construct();
		void ExecuteUbergraph_CommunicateSettingMenu_FaceBgData(int32_t EntryPoint);
		void OnUnhover__DelegateSignature();
		void OnHover__DelegateSignature();
		void OnClickEvent__DelegateSignature();
		void ClickedBtnAwardItemIconList__DelegateSignature(int32_t AwardId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
