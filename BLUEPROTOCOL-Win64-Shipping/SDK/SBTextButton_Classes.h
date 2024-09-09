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
	 * BlueprintGeneratedClass SBTextButton.SBTextButton_C
	 * Size -> 0x0048 (FullSize[0x04E0] - InheritedSize[0x0498])
	 */
	class USBTextButton_C : public USBButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UTextBlock*>                                  ChildText;                                               // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		struct FLinearColor                                        NormalChildTextColor;                                    // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HoveredChildTextColor;                                   // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        PressedChildTextColor;                                   // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SearchChildText(class UPanelWidget* PanelWidget);
		void InitChildText();
		void OnHovered_Event_1();
		void OnUnhovered_Event_1();
		void UpdateChildTextColor();
		void Construct();
		void OnPressed_Event_1();
		void OnReleased_Event_1();
		void ExecuteUbergraph_SBTextButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
