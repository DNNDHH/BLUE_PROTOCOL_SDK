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
	 * 		Name   -> Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.PlayAnimCircle
	 * 		Flags  -> ()
	 */
	void UIconDxBattle_Supplier_C::PlayAnimCircle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.PlayAnimCircle");
		
		UIconDxBattle_Supplier_C_PlayAnimCircle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.OnSetInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIconDxBattle_Supplier_C::OnSetInside(bool IsInSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.OnSetInside");
		
		UIconDxBattle_Supplier_C_OnSetInside_Params params {};
		params.IsInSide = IsInSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.Construct
	 * 		Flags  -> ()
	 */
	void UIconDxBattle_Supplier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.Construct");
		
		UIconDxBattle_Supplier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.ExecuteUbergraph_IconDxBattle_Supplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIconDxBattle_Supplier_C::ExecuteUbergraph_IconDxBattle_Supplier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconDxBattle_Supplier.IconDxBattle_Supplier_C.ExecuteUbergraph_IconDxBattle_Supplier");
		
		UIconDxBattle_Supplier_C_ExecuteUbergraph_IconDxBattle_Supplier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconDxBattle_Supplier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconDxBattle_Supplier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconDxBattle_Supplier.IconDxBattle_Supplier_C");
		return ptr;
	}

}


