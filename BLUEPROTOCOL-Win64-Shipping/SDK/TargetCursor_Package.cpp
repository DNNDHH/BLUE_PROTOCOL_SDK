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
	 * 		Name   -> Function TargetCursor.TargetCursor_C.isTargetInvincible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsInvincible                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTargetCursor_C::isTargetInvincible(bool* OutIsInvincible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.isTargetInvincible");
		
		UTargetCursor_C_isTargetInvincible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsInvincible != nullptr)
			*OutIsInvincible = params.OutIsInvincible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.GetNearRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutIsRange                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetCursor_C::GetNearRange(float* OutIsRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.GetNearRange");
		
		UTargetCursor_C_GetNearRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsRange != nullptr)
			*OutIsRange = params.OutIsRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.ColorChange
	 * 		Flags  -> ()
	 */
	void UTargetCursor_C::ColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.ColorChange");
		
		UTargetCursor_C_ColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.isTargetNear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutIsNear                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTargetCursor_C::isTargetNear(bool* OutIsNear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.isTargetNear");
		
		UTargetCursor_C_isTargetNear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIsNear != nullptr)
			*OutIsNear = params.OutIsNear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.UpdatePosition
	 * 		Flags  -> ()
	 */
	void UTargetCursor_C::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.UpdatePosition");
		
		UTargetCursor_C_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.VisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTargetCursor_C::VisibleSettingChangeDelegate(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.VisibleSettingChangeDelegate");
		
		UTargetCursor_C_VisibleSettingChangeDelegate_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.Construct
	 * 		Flags  -> ()
	 */
	void UTargetCursor_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.Construct");
		
		UTargetCursor_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.Destruct
	 * 		Flags  -> ()
	 */
	void UTargetCursor_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.Destruct");
		
		UTargetCursor_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.OnPlayLockOnSe
	 * 		Flags  -> ()
	 */
	void UTargetCursor_C::OnPlayLockOnSe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.OnPlayLockOnSe");
		
		UTargetCursor_C_OnPlayLockOnSe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TargetCursor.TargetCursor_C.ExecuteUbergraph_TargetCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTargetCursor_C::ExecuteUbergraph_TargetCursor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TargetCursor.TargetCursor_C.ExecuteUbergraph_TargetCursor");
		
		UTargetCursor_C_ExecuteUbergraph_TargetCursor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTargetCursor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTargetCursor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TargetCursor.TargetCursor_C");
		return ptr;
	}

}


