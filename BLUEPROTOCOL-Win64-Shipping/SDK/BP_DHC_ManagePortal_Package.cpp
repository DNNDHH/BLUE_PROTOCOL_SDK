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
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyMemberMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHC_ManagePortal_C::CheckPartyMemberMenu(class ASBPlayerCharacter* PlayerCharacter, bool* CanStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyMemberMenu");
		
		ABP_DHC_ManagePortal_C_CheckPartyMemberMenu_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanStart != nullptr)
			*CanStart = params.CanStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHC_ManagePortal_C::CheckPartyId(class ASBPlayerCharacter* PlayerCharacter, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.CheckPartyId");
		
		ABP_DHC_ManagePortal_C_CheckPartyId_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetPlayerNowDHC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_DHCMeasurer_C*                           NowDHC                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_ManagePortal_C::GetPlayerNowDHC(class APlayerController* Controller, class ABP_DHCMeasurer_C** NowDHC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetPlayerNowDHC");
		
		ABP_DHC_ManagePortal_C_GetPlayerNowDHC_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NowDHC != nullptr)
			*NowDHC = params.NowDHC;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetFreeDHCMesasurer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_DHCMeasurer_C*                           VacantArea                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_ManagePortal_C::GetFreeDHCMesasurer(class ABP_DHCMeasurer_C** VacantArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.GetFreeDHCMesasurer");
		
		ABP_DHC_ManagePortal_C_GetFreeDHCMesasurer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VacantArea != nullptr)
			*VacantArea = params.VacantArea;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_DHC_ManagePortal_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ReceiveBeginPlay");
		
		ABP_DHC_ManagePortal_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.Interacted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_DHC_ManagePortal_C::Interacted(class AActor* OtherActor, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.Interacted");
		
		ABP_DHC_ManagePortal_C_Interacted_Params params {};
		params.OtherActor = OtherActor;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHCInteractionResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InteractedPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EN_DHC_InteractResult                              Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_ManagePortal_C::DHCInteractionResult(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHCInteractionResult");
		
		ABP_DHC_ManagePortal_C_DHCInteractionResult_Params params {};
		params.InteractedPlayer = InteractedPlayer;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ExecuteUbergraph_BP_DHC_ManagePortal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_ManagePortal_C::ExecuteUbergraph_BP_DHC_ManagePortal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.ExecuteUbergraph_BP_DHC_ManagePortal");
		
		ABP_DHC_ManagePortal_C_ExecuteUbergraph_BP_DHC_ManagePortal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHC_Interacted__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InteractedPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EN_DHC_InteractResult                              Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_DHC_ManagePortal_C::DHC_Interacted__DelegateSignature(class ASBPlayerCharacter* InteractedPlayer, EN_DHC_InteractResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_DHC_ManagePortal.BP_DHC_ManagePortal_C.DHC_Interacted__DelegateSignature");
		
		ABP_DHC_ManagePortal_C_DHC_Interacted__DelegateSignature_Params params {};
		params.InteractedPlayer = InteractedPlayer;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_DHC_ManagePortal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_DHC_ManagePortal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DHC_ManagePortal.BP_DHC_ManagePortal_C");
		return ptr;
	}

}


