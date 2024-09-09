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
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.CheckAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::CheckAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.CheckAmount");
		
		UEventShopTokenBox_Item_C_CheckAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SubAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::SubAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SubAmount");
		
		UEventShopTokenBox_Item_C_SubAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::SetIcon(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetIcon");
		
		UEventShopTokenBox_Item_C_SetIcon_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::SetAmount(int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.SetAmount");
		
		UEventShopTokenBox_Item_C_SetAmount_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_B6C13B804169678F239B7791E3D3E1F9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::OnLoaded_B6C13B804169678F239B7791E3D3E1F9(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_B6C13B804169678F239B7791E3D3E1F9");
		
		UEventShopTokenBox_Item_C_OnLoaded_B6C13B804169678F239B7791E3D3E1F9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84");
		
		UEventShopTokenBox_Item_C_OnLoaded_53B3EE9042FEBAA5C204CDBAEC180C84_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.LoadTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::LoadTexture(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.LoadTexture");
		
		UEventShopTokenBox_Item_C_LoadTexture_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.ExecuteUbergraph_EventShopTokenBox_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopTokenBox_Item_C::ExecuteUbergraph_EventShopTokenBox_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopTokenBox_Item.EventShopTokenBox_Item_C.ExecuteUbergraph_EventShopTokenBox_Item");
		
		UEventShopTokenBox_Item_C_ExecuteUbergraph_EventShopTokenBox_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopTokenBox_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopTokenBox_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopTokenBox_Item.EventShopTokenBox_Item_C");
		return ptr;
	}

}


