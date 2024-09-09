/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::SetTexture(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetTexture");
		
		ULibraryMenu_LoginBonus_BannerImage_C_SetTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetBtnSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::SetBtnSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetBtnSelected");
		
		ULibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           TextureImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::SetImage(class UTexture2DDynamic* TextureImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetImage");
		
		ULibraryMenu_LoginBonus_BannerImage_C_SetImage_Params params {};
		params.TextureImage = TextureImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		ULibraryMenu_LoginBonus_BannerImage_C_BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage");
		
		ULibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.OnBannerClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULibraryMenu_LoginBonus_BannerImage_C*       SelectedBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonus_BannerImage_C::OnBannerClicked__DelegateSignature(int32_t ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.OnBannerClicked__DelegateSignature");
		
		ULibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature_Params params {};
		params.ID = ID;
		params.SelectedBtn = SelectedBtn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_LoginBonus_BannerImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_LoginBonus_BannerImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C");
		return ptr;
	}

}


