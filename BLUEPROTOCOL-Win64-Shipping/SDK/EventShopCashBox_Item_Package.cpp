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
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_Item_C::SetIcon(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetIcon");
		
		UEventShopCashBox_Item_C_SetIcon_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isOver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventShopCashBox_Item_C::SetAmount(int32_t Amount, bool isOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.SetAmount");
		
		UEventShopCashBox_Item_C_SetAmount_Params params {};
		params.Amount = Amount;
		params.isOver = isOver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_32A5081B4EB2444CBED5089FF650625A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_Item_C::OnLoaded_32A5081B4EB2444CBED5089FF650625A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_32A5081B4EB2444CBED5089FF650625A");
		
		UEventShopCashBox_Item_C_OnLoaded_32A5081B4EB2444CBED5089FF650625A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_2719BDBD41C64E94F07F12919BE767BE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_Item_C::OnLoaded_2719BDBD41C64E94F07F12919BE767BE(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.OnLoaded_2719BDBD41C64E94F07F12919BE767BE");
		
		UEventShopCashBox_Item_C_OnLoaded_2719BDBD41C64E94F07F12919BE767BE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.LoadTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_Item_C::LoadTexture(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.LoadTexture");
		
		UEventShopCashBox_Item_C_LoadTexture_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCashBox_Item.EventShopCashBox_Item_C.ExecuteUbergraph_EventShopCashBox_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCashBox_Item_C::ExecuteUbergraph_EventShopCashBox_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCashBox_Item.EventShopCashBox_Item_C.ExecuteUbergraph_EventShopCashBox_Item");
		
		UEventShopCashBox_Item_C_ExecuteUbergraph_EventShopCashBox_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCashBox_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCashBox_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCashBox_Item.EventShopCashBox_Item_C");
		return ptr;
	}

}


