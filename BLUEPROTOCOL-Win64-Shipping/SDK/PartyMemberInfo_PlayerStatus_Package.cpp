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
	 * 		Name   -> Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.GetMapName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutPlayerName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_PlayerStatus_C::GetMapName(class FString* OutPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.GetMapName");
		
		UPartyMemberInfo_PlayerStatus_C_GetMapName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPlayerName != nullptr)
			*OutPlayerName = params.OutPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.SetMapName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_PlayerStatus_C::SetMapName(const class FString& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.SetMapName");
		
		UPartyMemberInfo_PlayerStatus_C_SetMapName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UPartyMemberInfo_PlayerStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.Construct");
		
		UPartyMemberInfo_PlayerStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.ExecuteUbergraph_PartyMemberInfo_PlayerStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberInfo_PlayerStatus_C::ExecuteUbergraph_PartyMemberInfo_PlayerStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.ExecuteUbergraph_PartyMemberInfo_PlayerStatus");
		
		UPartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberInfo_PlayerStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberInfo_PlayerStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C");
		return ptr;
	}

}


