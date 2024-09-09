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
	 * 		Name   -> Function IconEnemyGate.IconEnemyGate_C.OnSetInside
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInSide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIconEnemyGate_C::OnSetInside(bool IsInSide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconEnemyGate.IconEnemyGate_C.OnSetInside");
		
		UIconEnemyGate_C_OnSetInside_Params params {};
		params.IsInSide = IsInSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconEnemyGate.IconEnemyGate_C.PlayAnimCircle
	 * 		Flags  -> ()
	 */
	void UIconEnemyGate_C::PlayAnimCircle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconEnemyGate.IconEnemyGate_C.PlayAnimCircle");
		
		UIconEnemyGate_C_PlayAnimCircle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconEnemyGate.IconEnemyGate_C.Construct
	 * 		Flags  -> ()
	 */
	void UIconEnemyGate_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconEnemyGate.IconEnemyGate_C.Construct");
		
		UIconEnemyGate_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function IconEnemyGate.IconEnemyGate_C.ExecuteUbergraph_IconEnemyGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIconEnemyGate_C::ExecuteUbergraph_IconEnemyGate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IconEnemyGate.IconEnemyGate_C.ExecuteUbergraph_IconEnemyGate");
		
		UIconEnemyGate_C_ExecuteUbergraph_IconEnemyGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIconEnemyGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIconEnemyGate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass IconEnemyGate.IconEnemyGate_C");
		return ptr;
	}

}


