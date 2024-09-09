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
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetPlayerTagPram
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterNaEvent                            SBMasterNaEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      BuffRate                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Other_C::GetPlayerTagPram(const struct FSBMasterNaEvent& SBMasterNaEvent, bool* Active, class FString* BuffRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetPlayerTagPram");
		
		UMyCharaMenu_Other_C_GetPlayerTagPram_Params params {};
		params.SBMasterNaEvent = SBMasterNaEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
		if (BuffRate != nullptr)
			*BuffRate = params.BuffRate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdatePlayerTag
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::UpdatePlayerTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdatePlayerTag");
		
		UMyCharaMenu_Other_C_UpdatePlayerTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.Get Free Buff Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFreeBuffPointType                               Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBStatusAlimentConfig                      OutRow                                                     (Parm, OutParm)
	 */
	void UMyCharaMenu_Other_C::GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text, struct FSBStatusAlimentConfig* OutRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.Get Free Buff Text");
		
		UMyCharaMenu_Other_C_GetFreeBuffText_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (OutRow != nullptr)
			*OutRow = params.OutRow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateFreeBuff
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::UpdateFreeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateFreeBuff");
		
		UMyCharaMenu_Other_C_UpdateFreeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.FixActiveList
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::FixActiveList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.FixActiveList");
		
		UMyCharaMenu_Other_C_FixActiveList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.TryGetActiveListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEffect_Other_C*                             item                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Other_C::TryGetActiveListItem(class UEffect_Other_C** item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.TryGetActiveListItem");
		
		UMyCharaMenu_Other_C_TryGetActiveListItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (item != nullptr)
			*item = params.item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetBuffValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EOutGameBuffType                                   InBuffType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UMyCharaMenu_Other_C::GetBuffValue(int32_t BaseValue, bool IsRate, EOutGameBuffType InBuffType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.GetBuffValue");
		
		UMyCharaMenu_Other_C_GetBuffValue_Params params {};
		params.BaseValue = BaseValue;
		params.IsRate = IsRate;
		params.InBuffType = InBuffType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.CreateStockOutGameBuff
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::CreateStockOutGameBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.CreateStockOutGameBuff");
		
		UMyCharaMenu_Other_C_CreateStockOutGameBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveNetCafeBuff
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::UpdateActiveNetCafeBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveNetCafeBuff");
		
		UMyCharaMenu_Other_C_UpdateActiveNetCafeBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveOutGameBuff
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::UpdateActiveOutGameBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.UpdateActiveOutGameBuff");
		
		UMyCharaMenu_Other_C_UpdateActiveOutGameBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.Construct");
		
		UMyCharaMenu_Other_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.Update
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_Other_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.Update");
		
		UMyCharaMenu_Other_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_Other.MyCharaMenu_Other_C.ExecuteUbergraph_MyCharaMenu_Other
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_Other_C::ExecuteUbergraph_MyCharaMenu_Other(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_Other.MyCharaMenu_Other_C.ExecuteUbergraph_MyCharaMenu_Other");
		
		UMyCharaMenu_Other_C_ExecuteUbergraph_MyCharaMenu_Other_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_Other_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_Other_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_Other.MyCharaMenu_Other_C");
		return ptr;
	}

}


