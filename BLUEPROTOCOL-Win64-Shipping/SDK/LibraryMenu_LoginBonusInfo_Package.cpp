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
	 * 		Name   -> Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetTextureData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusInfo_C::SetTextureData(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetTextureData");
		
		ULibraryMenu_LoginBonusInfo_C_SetTextureData_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetImageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusInfo_C::SetImageData(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetImageData");
		
		ULibraryMenu_LoginBonusInfo_C_SetImageData_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLoginBonusWindowData                     LoginBonusData                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULibraryMenu_LoginBonusInfo_C::SetData(const struct FSBLoginBonusWindowData& LoginBonusData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetData");
		
		ULibraryMenu_LoginBonusInfo_C_SetData_Params params {};
		params.LoginBonusData = LoginBonusData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_LoginBonusInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_LoginBonusInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C");
		return ptr;
	}

}


