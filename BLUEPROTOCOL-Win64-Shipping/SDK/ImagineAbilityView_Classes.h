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
	 * WidgetBlueprintGeneratedClass ImagineAbilityView.ImagineAbilityView_C
	 * Size -> 0x01B8 (FullSize[0x0430] - InheritedSize[0x0278])
	 */
	class UImagineAbilityView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UListView*                                           AbilityList;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               Btn_Close2;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Select;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_108;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Txt_BtnSelect;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FOwnItemInfo                                        Target;                                                  // 0x02B0(0x0150) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FOwnItemInfo>                                Materials;                                               // 0x0400(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnSelect;                                                // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GenerateList();
		void Construct();
		void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Close();
		void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ImagineAbilityView_Btn_Select_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* item, bool bIsHovered);
		void BndEvt__ImagineAbilityView_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
		void BndEvt__ImagineAbilityView_Btn_Close2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ImagineAbilityView_AbilityList_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* item);
		void ExecuteUbergraph_ImagineAbilityView(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		void OnSelect__DelegateSignature(const struct FOwnItemInfo& Target);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
