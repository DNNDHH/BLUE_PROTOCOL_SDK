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
	 * 		Name   -> Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsLevelSync                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_LvSync_C::Update(bool bIsLevelSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Update");
		
		UMyCharaMenu_LvSync_C_Update_Params params {};
		params.bIsLevelSync = bIsLevelSync;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_LvSync_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.Construct");
		
		UMyCharaMenu_LvSync_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.ExecuteUbergraph_MyCharaMenu_LvSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_LvSync_C::ExecuteUbergraph_MyCharaMenu_LvSync(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_LvSync.MyCharaMenu_LvSync_C.ExecuteUbergraph_MyCharaMenu_LvSync");
		
		UMyCharaMenu_LvSync_C_ExecuteUbergraph_MyCharaMenu_LvSync_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_LvSync_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_LvSync_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_LvSync.MyCharaMenu_LvSync_C");
		return ptr;
	}

}


