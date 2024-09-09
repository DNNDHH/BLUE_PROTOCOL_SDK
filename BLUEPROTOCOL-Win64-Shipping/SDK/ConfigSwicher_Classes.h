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
	 * WidgetBlueprintGeneratedClass ConfigSwicher.ConfigSwicher_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class UConfigSwicher_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHUDConfigMode_C*                                    HUDConfigMode;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyConfig_C*                                        KeyConfig;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EConfigurations                                            NowConfig;                                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9067[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SuccessChanged;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             FailChanged;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EConfigurations                                            NextConfig;                                              // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q8JZ[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_Dialog_C*                                        YnDialog;                                                // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Dialog_C*                                        NothingChange;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RequestParentFocus;                                      // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnHasChenged;                                            // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBOptionChildBase*                                  General;                                                 // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBOptionChildBase*                                  Sound;                                                   // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBOptionChildBase*                                  graphics;                                                // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeCS();
		void GenerateConfigs();
		void YesNoCheckResult(bool bIsYes);
		void GetWidget(EConfigurations NectConfig, class UWidget** Widget);
		void SetCloseState(bool Close);
		void IsClosed(bool* IsClosed);
		void IsCommandKeyAsNone(bool* bNone);
		void IsChanged(bool* IsChanged);
		void Construct();
		void ChangeConfigMode(EConfigurations Configurations);
		void Changed(bool bConfigChanged);
		void YesNoCheck(EDialogResult Result);
		void CheckChanged();
		void IsNone(EDialogResult Result);
		void LocalSave();
		void BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature();
		void SetTitleMode(bool bTitleMode);
		void ShowErrorNone();
		void ExecuteUbergraph_ConfigSwicher(int32_t EntryPoint);
		void OnHasChenged__DelegateSignature();
		void RequestParentFocus__DelegateSignature();
		void FailChanged__DelegateSignature();
		void SuccessChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
