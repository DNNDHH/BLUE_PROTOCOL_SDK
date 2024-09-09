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
	 * WidgetBlueprintGeneratedClass Map_MapBtn.Map_MapBtn_C
	 * Size -> 0x0054 (FullSize[0x02CC] - InheritedSize[0x0278])
	 */
	class UMap_MapBtn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn01;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtTitle;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBTextTableAsset*                                   TextTableAsset;                                          // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FKey                                                MyKey;                                                   // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       OutGamePadMode;                                          // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OY31[0x3];                                   // 0x02C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActionName;                                              // 0x02C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetHoveredSoundId(ESystemSE InSoundId);
		void SetPressedSoundId(ESystemSE InSoundId);
		void BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Map_MapBtn_Btn01_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__Map_MapBtn_Btn01_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void UpdateText();
		void Construct();
		void CustomEvent_2(ESBPadKeySkinType SkinType);
		void Destruct();
		void CustomEvent_3();
		void SetClickInputAction(const class FName& ActionName);
		void CustomEvent_1();
		void StopClickInputAction();
		void ExecuteUbergraph_Map_MapBtn(int32_t EntryPoint);
		void OnButtonClicked__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
