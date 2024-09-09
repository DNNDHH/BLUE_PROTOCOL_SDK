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
	 * 		Name   -> Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.Construct
	 * 		Flags  -> ()
	 */
	void UMiniMapIconDxBattle_Supplier_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.Construct");
		
		UMiniMapIconDxBattle_Supplier_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.カスタムイベント_1
	 * 		Flags  -> ()
	 */
	void UMiniMapIconDxBattle_Supplier_C::_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.カスタムイベント_1");
		
		UMiniMapIconDxBattle_Supplier_C__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.ExecuteUbergraph_MiniMapIconDxBattle_Supplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIconDxBattle_Supplier_C::ExecuteUbergraph_MiniMapIconDxBattle_Supplier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C.ExecuteUbergraph_MiniMapIconDxBattle_Supplier");
		
		UMiniMapIconDxBattle_Supplier_C_ExecuteUbergraph_MiniMapIconDxBattle_Supplier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIconDxBattle_Supplier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIconDxBattle_Supplier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIconDxBattle_Supplier.MiniMapIconDxBattle_Supplier_C");
		return ptr;
	}

}


