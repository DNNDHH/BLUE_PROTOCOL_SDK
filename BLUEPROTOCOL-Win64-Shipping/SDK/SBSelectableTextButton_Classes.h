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
	 * BlueprintGeneratedClass SBSelectableTextButton.SBSelectableTextButton_C
	 * Size -> 0x0579 (FullSize[0x0A11] - InheritedSize[0x0498])
	 */
	class USBSelectableTextButton_C : public USBButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bDesignCheck;                                            // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMW0[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTextBlock*>                                  ChildText;                                               // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bSelected;                                               // 0x04B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bHovered;                                                // 0x04B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bPressed;                                                // 0x04BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YGLE[0x5];                                   // 0x04BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        UnselectedStyle;                                         // 0x04C0(0x0278) Edit, BlueprintVisible
		struct FButtonStyle                                        SelectedStyle;                                           // 0x0738(0x0278) Edit, BlueprintVisible
		struct FLinearColor                                        UnselectNormalChildTextColor;                            // 0x09B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnselectHoveredChildTextColor;                           // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnselectPressedChildTextColor;                           // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectNormalChildTextColor;                              // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectHoverdChildTextColor;                              // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectPressedChildTextColor;                             // 0x0A00(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bExecuteStyleToBothStyle;                                // 0x0A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SearchChildText(class UPanelWidget* PanelWidget);
		void IsSelected(bool* bIsSelected);
		void InitChildText();
		void SetSelected(bool bSelect);
		void InitBothStyle(const struct FButtonStyle& SelectedStyle);
		void OnHovered_Event_1();
		void OnUnhovered_Event_1();
		void UpdateChildTextColor();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void UpdateButtonStyle();
		void OnPressed_Event_1();
		void OnReleased_Event_1();
		void UpdateButtonStyleByDesignCheck();
		void ExecuteUbergraph_SBSelectableTextButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
