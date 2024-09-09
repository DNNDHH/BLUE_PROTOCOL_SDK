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
	 * WidgetBlueprintGeneratedClass KeyGuide2.KeyGuide2_C
	 * Size -> 0x00C8 (FullSize[0x0340] - InheritedSize[0x0278])
	 */
	class UKeyGuide2_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     Disp;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Gamepad2_C*                                KeyGuide_Gamepad2;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Gamepad2_CheerfulItem_C*                   KeyGuide_Gamepad2_CheerfulItem;                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Gamepad2_cty_C*                            KeyGuide_Gamepad2_cty;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Gamepad2_Mount_C*                          KeyGuide_Gamepad2_Mount;                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Gamepad2_OfflineBattle_C*                  KeyGuide_Gamepad2_OfflineBattle;                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Mouse2_C*                                  KeyGuide_Mouse2;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Mouse2_CheerfulItem_C*                     KeyGuide_Mouse2_CheerfulItem;                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Mouse2_cty_C*                              KeyGuide_Mouse2_cty;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Mouse2_Mount_C*                            KeyGuide_Mouse2_Mount;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Mouse2_OfflineBattle_C*                    KeyGuide_Mouse2_OfflineBattle;                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bShowGamepad;                                            // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInitKeyGuideSettingDone;                              // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EKeyGuideType                                              CurrKeyGuideType;                                        // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDesignTime;                                            // 0x02DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_49KM[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPlayerAdventurerComponent*                        AdvComponent;                                            // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMounting;                                              // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCheerfulItem;                                          // 0x02E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TM2R[0x6];                                   // 0x02EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeKeyGuideVisibilityEvent;                         // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    VisibleAdventureRank;                                    // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I2GJ[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeMountEvent;                                      // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ASBPlayerCharacter*                                  AsSBPlayerCharacter;                                     // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCheerfulItemEvent;                                     // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         tmpNextActiveWidget;                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SettingTimer;                                            // 0x0338(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ExecChangeKeyGuide();
		struct FSBPlayerClassKeyConfigData GetPlayerClassKeyConfigData();
		void SetIsMount(bool* RetValue);
		void SetKeyConfig_OfflineBattle(bool* RetValue);
		void SetKeyConfig_Cty(bool* RetValue);
		void SetCheerfulItem(bool* RetValue);
		void SetKeyConfig(bool* RetValue);
		void IsKeyGuideAuto(bool* bAuto);
		void Construct();
		void ChangeKeyGuide(EKeyGuideType InKeyGuideType);
		void ChangeKeyGuideVisibility();
		void OnUpdateKeyConfig();
		void OnRetryKeyGuideType();
		void PreConstruct(bool IsDesignTime);
		void OnAdventurerRankDelegate_Event(int32_t InRetCode);
		void ChangeKeyGuideVisibilityAuto();
		void SetEditMode(bool bIsEdit);
		void UnbindAdventurerRankDelegate();
		void Destruct();
		void UnbindUpdateKeyConfigDelegate();
		void CustomEvent_1(class UObject* Sender, class UObject* Param);
		void OnChangePad(ESBPadKeySkinType SkinType);
		void BindPadSkinChange();
		void UnbindPadSkinChange();
		void InitKeyGuideSettingTimerEvent();
		void ExecuteUbergraph_KeyGuide2(int32_t EntryPoint);
		void OnCheerfulItemEvent__DelegateSignature(bool IsCheerfulItem);
		void OnChangeMountEvent__DelegateSignature(bool IsMount);
		void OnChangeKeyGuideVisibilityEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
