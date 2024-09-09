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
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetDeadFlag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutDeadFlag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PartyMemberIcon_C::GetDeadFlag(bool* OutDeadFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetDeadFlag");
		
		UMapWidget_PartyMemberIcon_C_GetDeadFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDeadFlag != nullptr)
			*OutDeadFlag = params.OutDeadFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              OutPlayerState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PartyMemberIcon_C::GetPlayerState(class ASBPlayerState** OutPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetPlayerState");
		
		UMapWidget_PartyMemberIcon_C_GetPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerState != nullptr)
			*OutPlayerState = params.OutPlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.SetPlayerState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PartyMemberIcon_C::SetPlayerState(class ASBPlayerState* InPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.SetPlayerState");
		
		UMapWidget_PartyMemberIcon_C_SetPlayerState_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UMapWidget_PartyMemberIcon_C::GetText(class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetText");
		
		UMapWidget_PartyMemberIcon_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckDead
	 * 		Flags  -> ()
	 */
	void UMapWidget_PartyMemberIcon_C::CheckDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckDead");
		
		UMapWidget_PartyMemberIcon_C_CheckDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Set Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapWidget_PartyMemberIcon_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Set Text");
		
		UMapWidget_PartyMemberIcon_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_PartyMemberIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Construct");
		
		UMapWidget_PartyMemberIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PartyMemberIcon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Tick");
		
		UMapWidget_PartyMemberIcon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckVisible
	 * 		Flags  -> ()
	 */
	void UMapWidget_PartyMemberIcon_C::CheckVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckVisible");
		
		UMapWidget_PartyMemberIcon_C_CheckVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.ExecuteUbergraph_MapWidget_PartyMemberIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PartyMemberIcon_C::ExecuteUbergraph_MapWidget_PartyMemberIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.ExecuteUbergraph_MapWidget_PartyMemberIcon");
		
		UMapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_PartyMemberIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_PartyMemberIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C");
		return ptr;
	}

}


