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
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetStackBToolTipStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsIconOff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftResultWeaponSingle_C::SetStackBToolTipStatus(bool bIsIconOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetStackBToolTipStatus");
		
		UCraftResultWeaponSingle_C_SetStackBToolTipStatus_Params params {};
		params.bIsIconOff = bIsIconOff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UCraftResultWeaponSingle_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.PlayAnimIn");
		
		UCraftResultWeaponSingle_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdatePerkDisp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBOwnItemListContainer*                     Storage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCritical                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftResultWeaponSingle_C::UpdatePerkDisp(class USBOwnItemListContainer* Storage, bool IsCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdatePerkDisp");
		
		UCraftResultWeaponSingle_C_UpdatePerkDisp_Params params {};
		params.Storage = Storage;
		params.IsCritical = IsCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdateStorageDisp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStorage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftResultWeaponSingle_C::UpdateStorageDisp(bool IsStorage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdateStorageDisp");
		
		UCraftResultWeaponSingle_C_UpdateStorageDisp_Params params {};
		params.IsStorage = IsStorage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetUID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            StorageNo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCritical                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftResultWeaponSingle_C::SetUID(const class FString& UID, int32_t StorageNo, bool IsCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetUID");
		
		UCraftResultWeaponSingle_C_SetUID_Params params {};
		params.UID = UID;
		params.StorageNo = StorageNo;
		params.IsCritical = IsCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.ExecuteUbergraph_CraftResultWeaponSingle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftResultWeaponSingle_C::ExecuteUbergraph_CraftResultWeaponSingle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.ExecuteUbergraph_CraftResultWeaponSingle");
		
		UCraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftResultWeaponSingle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftResultWeaponSingle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftResultWeaponSingle.CraftResultWeaponSingle_C");
		return ptr;
	}

}


