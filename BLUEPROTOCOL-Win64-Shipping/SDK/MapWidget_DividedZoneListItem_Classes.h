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
	 * WidgetBlueprintGeneratedClass MapWidget_DividedZoneListItem.MapWidget_DividedZoneListItem_C
	 * Size -> 0x0250 (FullSize[0x04C8] - InheritedSize[0x0278])
	 */
	class UMapWidget_DividedZoneListItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         Btn01;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtDividedZoneName;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              DividedZoneId;                                           // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         Btn01NormalButtonStyleDefault;                           // 0x02B0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Btn01HoveredButtonStyleDefault;                          // 0x0338(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateBrush                                         Btn01PressedButtonStyleDefault;                          // 0x03C0(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsSelected;                                              // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EI5E[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         Btn01NormalTintDefault;                                  // 0x0450(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Btn01HoveredTintDefault;                                 // 0x0478(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         Btn01PressedTintDefault;                                 // 0x04A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetSelected(bool InIsSelected);
		void SetIsEnable(bool InIsSelectable);
		void Setup(const class FString& InDividedZoneId);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Btn01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn01_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn01_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_MapWidget_DividedZoneListItem(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UMapWidget_DividedZoneListItem_C* InSelf, const class FString& InDividedZoneId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
