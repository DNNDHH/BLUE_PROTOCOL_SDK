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
	 * 		Name   -> Function NeedItemList.NeedItemList_C.SetBgSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   SizeXY                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_C::SetBgSize(const struct FVector2D& SizeXY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.SetBgSize");
		
		UNeedItemList_C_SetBgSize_Params params {};
		params.SizeXY = SizeXY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList.NeedItemList_C.AddDry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DryItemCnt                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_C::AddDry(int32_t DryItemCnt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.AddDry");
		
		UNeedItemList_C_AddDry_Params params {};
		params.DryItemCnt = DryItemCnt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList.NeedItemList_C.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftNeedItems                             InCraftNeedItems                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               OutIsCraftable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNeedItemList_C::Add(struct FCraftNeedItems* InCraftNeedItems, bool* OutIsCraftable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.Add");
		
		UNeedItemList_C_Add_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InCraftNeedItems != nullptr)
			*InCraftNeedItems = params.InCraftNeedItems;
		if (OutIsCraftable != nullptr)
			*OutIsCraftable = params.OutIsCraftable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList.NeedItemList_C.Clear
	 * 		Flags  -> ()
	 */
	void UNeedItemList_C::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.Clear");
		
		UNeedItemList_C_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList.NeedItemList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNeedItemList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.PreConstruct");
		
		UNeedItemList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NeedItemList.NeedItemList_C.ExecuteUbergraph_NeedItemList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNeedItemList_C::ExecuteUbergraph_NeedItemList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NeedItemList.NeedItemList_C.ExecuteUbergraph_NeedItemList");
		
		UNeedItemList_C_ExecuteUbergraph_NeedItemList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNeedItemList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNeedItemList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NeedItemList.NeedItemList_C");
		return ptr;
	}

}


