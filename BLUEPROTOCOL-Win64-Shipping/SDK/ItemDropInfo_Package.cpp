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
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UItemDropInfo_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.GetToolTipWidget_1");
		
		UItemDropInfo_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.GetTexts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemMasterData                             ItemMasterData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FText                                        Detail1                                                    (Parm, OutParm)
	 */
	void UItemDropInfo_C::GetTexts(const struct FItemMasterData& ItemMasterData, class FText* Detail1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.GetTexts");
		
		UItemDropInfo_C_GetTexts_Params params {};
		params.ItemMasterData = ItemMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Detail1 != nullptr)
			*Detail1 = params.Detail1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.Construct
	 * 		Flags  -> ()
	 */
	void UItemDropInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.Construct");
		
		UItemDropInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.Set ItemId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDropInfo_C::SetItemId(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.Set ItemId");
		
		UItemDropInfo_C_SetItemId_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.Destruct
	 * 		Flags  -> ()
	 */
	void UItemDropInfo_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.Destruct");
		
		UItemDropInfo_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.SetTokenId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TokenID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDropInfo_C::SetTokenId(int32_t TokenID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.SetTokenId");
		
		UItemDropInfo_C_SetTokenId_Params params {};
		params.TokenID = TokenID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDropInfo.ItemDropInfo_C.ExecuteUbergraph_ItemDropInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDropInfo_C::ExecuteUbergraph_ItemDropInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDropInfo.ItemDropInfo_C.ExecuteUbergraph_ItemDropInfo");
		
		UItemDropInfo_C_ExecuteUbergraph_ItemDropInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemDropInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemDropInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDropInfo.ItemDropInfo_C");
		return ptr;
	}

}


