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
	 * WidgetBlueprintGeneratedClass HudPresetSelect.HudPresetSelect_C
	 * Size -> 0x00E9 (FullSize[0x0361] - InheritedSize[0x0278])
	 */
	class UHudPresetSelect_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnCancel;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnCS1;                                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnCS2;                                                  // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnCS3;                                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnPreset1;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnPreset2;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn05_C*                                         BtnPreset3;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_104;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class FString, ELayoutPresetTypes>                    TypeStorage;                                             // 0x02D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ApplyPreset;                                             // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LoadCustomSlot;                                          // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ELayoutPresetTypes                                         PresetType;                                              // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCustomHudLayoutSlot                                     CustomSlotType;                                          // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XZAH[0x6];                                   // 0x034A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsCancel;                                               // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadCustomSaveName();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Destruct();
		void BndEvt__BtnPreset1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__BtnPreset2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
		void BndEvt__BtnPreset3_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
		void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
		void BndEvt__BtnCS1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature();
		void BndEvt__BtnCS2_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
		void BndEvt__BtnCS3_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void PlayCloseAnimation();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2();
		void RequestClose();
		void ExecuteUbergraph_HudPresetSelect(int32_t EntryPoint);
		void OnClose__DelegateSignature(bool bIsCancel);
		void LoadCustomSlot__DelegateSignature(ESBCustomHudLayoutSlot LoadCustomSlot);
		void ApplyPreset__DelegateSignature(ELayoutPresetTypes eLayoutPreset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
