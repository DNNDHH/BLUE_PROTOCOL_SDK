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
	 * 		Name   -> Function RmShopMenuBg.RmShopMenuBg_C.SetBgImg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      InImage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenuBg_C::SetBgImg(ESBRmShopMenuType InMenuType, class UImage* InImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenuBg.RmShopMenuBg_C.SetBgImg");
		
		URmShopMenuBg_C_SetBgImg_Params params {};
		params.InMenuType = InMenuType;
		params.InImage = InImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RmShopMenuBg.RmShopMenuBg_C.ShowBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBRmShopMenuType                                  InMenuType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URmShopMenuBg_C::ShowBg(ESBRmShopMenuType InMenuType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RmShopMenuBg.RmShopMenuBg_C.ShowBg");
		
		URmShopMenuBg_C_ShowBg_Params params {};
		params.InMenuType = InMenuType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URmShopMenuBg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URmShopMenuBg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RmShopMenuBg.RmShopMenuBg_C");
		return ptr;
	}

}


