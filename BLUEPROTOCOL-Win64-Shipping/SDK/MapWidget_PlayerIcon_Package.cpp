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
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ShowTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PlayerIcon_C::ShowTooltip(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ShowTooltip");
		
		UMapWidget_PlayerIcon_C_ShowTooltip_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.PlayPublicDungeonAnimation
	 * 		Flags  -> ()
	 */
	void UMapWidget_PlayerIcon_C::PlayPublicDungeonAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.PlayPublicDungeonAnimation");
		
		UMapWidget_PlayerIcon_C_PlayPublicDungeonAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.GetCursorAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OutCursorAngle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PlayerIcon_C::GetCursorAngle(float* OutCursorAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.GetCursorAngle");
		
		UMapWidget_PlayerIcon_C_GetCursorAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCursorAngle != nullptr)
			*OutCursorAngle = params.OutCursorAngle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.SetCursorAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PlayerIcon_C::SetCursorAngle(float InAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.SetCursorAngle");
		
		UMapWidget_PlayerIcon_C_SetCursorAngle_Params params {};
		params.InAngle = InAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_PlayerIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.Construct");
		
		UMapWidget_PlayerIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ExecuteUbergraph_MapWidget_PlayerIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PlayerIcon_C::ExecuteUbergraph_MapWidget_PlayerIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ExecuteUbergraph_MapWidget_PlayerIcon");
		
		UMapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_PlayerIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_PlayerIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_PlayerIcon.MapWidget_PlayerIcon_C");
		return ptr;
	}

}


