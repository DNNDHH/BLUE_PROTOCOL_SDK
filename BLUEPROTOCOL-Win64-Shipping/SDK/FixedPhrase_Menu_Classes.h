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
	 * WidgetBlueprintGeneratedClass FixedPhrase_Menu.FixedPhrase_Menu_C
	 * Size -> 0x0044 (FullSize[0x02BC] - InheritedSize[0x0278])
	 */
	class UFixedPhrase_Menu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnBtn23_C*                                         Btn0;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         Btn1;                                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         Btn2;                                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn23_C*                                         Btn3;                                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          GridPanel;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatWindow_C*                                   ChatWindow;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCmnBtn23_C*                                         SelectedBtn;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectFixedPhraseId;                                     // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SelectFixedPhrase(int32_t InFixedPhraseId, class UFixedPhrase_Item_C* InFixedPhraseItem);
		void SetDragable(bool InDragable);
		void CreateFixedPhrase();
		void Construct();
		void OnClick(int32_t InIndex, class UFixedPhrase_Item_C* InItem);
		void BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_FixedPhrase_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
