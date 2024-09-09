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
	 * WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C
	 * Size -> 0x0520 (FullSize[0x0798] - InheritedSize[0x0278])
	 */
	class ULibraryMenu_LoginBonus_BannerImage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         BannerButton;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BannerImage;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBannerClicked;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    ID;                                                      // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0TSB[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        BtnSelectedStyle;                                        // 0x02A8(0x0278) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        BtnNomalStyle;                                           // 0x0520(0x0278) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetTexture(class UTexture2D* Texture);
		void SetBtnSelected(bool bSelected);
		void SetImage(class UTexture2DDynamic* TextureImage);
		void BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage(int32_t EntryPoint);
		void OnBannerClicked__DelegateSignature(int32_t ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
