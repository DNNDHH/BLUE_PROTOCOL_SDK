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
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.Add NFTArea Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NFTArea_C*                               NFTArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::AddNFTAreaIcon(class ABP_NFTArea_C* NFTArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.Add NFTArea Icon");
		
		UMiniMapIcons_C_AddNFTAreaIcon_Params params {};
		params.NFTArea = NFTArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateNFTAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMiniMapIcons*                             InMiniMapIcons                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateNFTAreaIcon(class USBMiniMapIcons* InMiniMapIcons, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateNFTAreaIcon");
		
		UMiniMapIcons_C_OnCreateNFTAreaIcon_Params params {};
		params.InMiniMapIcons = InMiniMapIcons;
		params.InLocation = InLocation;
		params.InRange = InRange;
		params.InAreaSize = InAreaSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointDungeonIcon");
		
		UMiniMapIcons_C_OnCreateWarpPointDungeonIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateUpdraftIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBUpdraft*                                  InUpdraft                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateUpdraftIcon(class ASBUpdraft* InUpdraft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateUpdraftIcon");
		
		UMiniMapIcons_C_OnCreateUpdraftIcon_Params params {};
		params.InUpdraft = InUpdraft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestNPCIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestIconType                                     QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCategory2                                    QuestCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateQuestNPCIcon(int32_t QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestNPCIcon");
		
		UMiniMapIcons_C_OnCreateQuestNPCIcon_Params params {};
		params.QuestID = QuestID;
		params.QuestType = QuestType;
		params.QuestCategory = QuestCategory;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBMiniMapIconType                                 IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestChallenge");
		
		UMiniMapIcons_C_OnCreateQuestChallenge_Params params {};
		params.IconType = IconType;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMiniMapIconBase*                          InIconWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USBMiniMapIconBase*                          IconWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::AddIcon(class USBMiniMapIconBase** InIconWidget, int32_t ZOrder, class USBMiniMapIconBase** IconWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddIcon");
		
		UMiniMapIcons_C_AddIcon_Params params {};
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InIconWidget != nullptr)
			*InIconWidget = params.InIconWidget;
		if (IconWidget != nullptr)
			*IconWidget = params.IconWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.DeleteDxBattleSupplierIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::DeleteDxBattleSupplierIcon(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.DeleteDxBattleSupplierIcon");
		
		UMiniMapIcons_C_DeleteDxBattleSupplierIcon_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleSupplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateDxBattleSupplier(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleSupplier");
		
		UMiniMapIcons_C_OnCreateDxBattleSupplier_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreatePublicDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        RowName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreatePublicDungeonIcon");
		
		UMiniMapIcons_C_OnCreatePublicDungeonIcon_Params params {};
		params.LocationInfo = LocationInfo;
		params.RowName = RowName;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateDungeonIcon");
		
		UMiniMapIcons_C_OnCreateDungeonIcon_Params params {};
		params.LocationInfo = LocationInfo;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateRaidIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateRaidIcon");
		
		UMiniMapIcons_C_OnCreateRaidIcon_Params params {};
		params.LocationInfo = LocationInfo;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddBuddyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InEnemyCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBMiniMapIconBase* UMiniMapIcons_C::AddBuddyIcon(class ASBEnemyCharacter* InEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddBuddyIcon");
		
		UMiniMapIcons_C_AddBuddyIcon_Params params {};
		params.InEnemyCharacter = InEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddNamedEnemyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InEnemyCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBMiniMapIconBase* UMiniMapIcons_C::AddNamedEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddNamedEnemyIcon");
		
		UMiniMapIcons_C_AddNamedEnemyIcon_Params params {};
		params.InEnemyCharacter = InEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddEnemyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InEnemyCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBMiniMapIconBase* UMiniMapIcons_C::AddEnemyIcon(class ASBEnemyCharacter* InEnemyCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddEnemyIcon");
		
		UMiniMapIcons_C_AddEnemyIcon_Params params {};
		params.InEnemyCharacter = InEnemyCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleGateBarrier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateDxBattleGateBarrier(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateDxBattleGateBarrier");
		
		UMiniMapIcons_C_OnCreateDxBattleGateBarrier_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddInterruptQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   InInstance                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::AddInterruptQuestIcon(class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddInterruptQuestIcon");
		
		UMiniMapIcons_C_AddInterruptQuestIcon_Params params {};
		params.InInstance = InInstance;
		params.InLocation = InLocation;
		params.InRange = InRange;
		params.InAreaSize = InAreaSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateBuffNPCIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBFieldActorFreeBuffPoint*                  FreeBuffPoint                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateBuffNPCIcon(class ASBFieldActorFreeBuffPoint* FreeBuffPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateBuffNPCIcon");
		
		UMiniMapIcons_C_OnCreateBuffNPCIcon_Params params {};
		params.FreeBuffPoint = FreeBuffPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateFacilityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InProfileId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBFacilityType                                    InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterProfileLocationData             InLocationData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateFacilityIcon(const class FName& InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateFacilityIcon");
		
		UMiniMapIcons_C_OnCreateFacilityIcon_Params params {};
		params.InProfileId = InProfileId;
		params.InType = InType;
		params.InLocationData = InLocationData;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.DeleteEnemyGateIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::DeleteEnemyGateIcon(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.DeleteEnemyGateIcon");
		
		UMiniMapIcons_C_DeleteEnemyGateIcon_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestAreaIcon");
		
		UMiniMapIcons_C_OnCreateQuestAreaIcon_Params params {};
		params.InLocation = InLocation;
		params.InRange = InRange;
		params.InAreaSize = InAreaSize;
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnDeletePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnDeletePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnDeletePartyMemberIcon");
		
		UMiniMapIcons_C_OnDeletePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreatePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnCreatePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreatePartyMemberIcon");
		
		UMiniMapIcons_C_OnCreatePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateShortPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnCreateShortPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateShortPin");
		
		UMiniMapIcons_C_OnCreateShortPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateCarryBases
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateCarryBases(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateCarryBases");
		
		UMiniMapIcons_C_OnCreateCarryBases_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateCarrys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBCarry*                                    InCarry                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateCarrys(class ASBCarry* InCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateCarrys");
		
		UMiniMapIcons_C_OnCreateCarrys_Params params {};
		params.InCarry = InCarry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateEnemyGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateEnemyGate(class AActor* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateEnemyGate");
		
		UMiniMapIcons_C_OnCreateEnemyGate_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateWarpPointIcon");
		
		UMiniMapIcons_C_OnCreateWarpPointIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreatePin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMapPinInfo                                 MapPinInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InWorldPosition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreatePin");
		
		UMiniMapIcons_C_OnCreatePin_Params params {};
		params.MapPinInfo = MapPinInfo;
		params.InWorldPosition = InWorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateClimbIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBClimbPoint*                               InClimbPoint                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateClimbIcon(class ASBClimbPoint* InClimbPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateClimbIcon");
		
		UMiniMapIcons_C_OnCreateClimbIcon_Params params {};
		params.InClimbPoint = InClimbPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateFishingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateFishingIcon(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateFishingIcon");
		
		UMiniMapIcons_C_OnCreateFishingIcon_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateCampIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateCampIcon(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateCampIcon");
		
		UMiniMapIcons_C_OnCreateCampIcon_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateEngramCannon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEngramCannon*                             EngramCannon                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCreateEngramCannon(class ASBEngramCannon* EngramCannon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateEngramCannon");
		
		UMiniMapIcons_C_OnCreateEngramCannon_Params params {};
		params.EngramCannon = EngramCannon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnUnbind");
		
		UMiniMapIcons_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnBind
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnBind");
		
		UMiniMapIcons_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.DebugPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStr                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::DebugPrint(const class FString& InStr, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.DebugPrint");
		
		UMiniMapIcons_C_DebugPrint_Params params {};
		params.InStr = InStr;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.GetPartyMemberIconPriority
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutPriority                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::GetPartyMemberIconPriority(class ASBPlayerState* InPlayerState, int32_t* OutPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.GetPartyMemberIconPriority");
		
		UMiniMapIcons_C_GetPartyMemberIconPriority_Params params {};
		params.InPlayerState = InPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPriority != nullptr)
			*OutPriority = params.OutPriority;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestIcon
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnCreateQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCreateQuestIcon");
		
		UMiniMapIcons_C_OnCreateQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.AddQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CheckDisplayOutOfRange                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIcons_C::AddQuestIcon(int32_t InQuestIndex, bool CheckDisplayOutOfRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.AddQuestIcon");
		
		UMiniMapIcons_C_AddQuestIcon_Params params {};
		params.InQuestIndex = InQuestIndex;
		params.CheckDisplayOutOfRange = CheckDisplayOutOfRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBMapErrorCode                                    ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::CustomEvent_1(bool Result, ESBMapErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.CustomEvent_1");
		
		UMiniMapIcons_C_CustomEvent_1_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindPartyMember
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindPartyMember");
		
		UMiniMapIcons_C_BindPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnPartyMemberUpdate_Event_1
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnPartyMemberUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnPartyMemberUpdate_Event_1");
		
		UMiniMapIcons_C_OnPartyMemberUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMember
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMember");
		
		UMiniMapIcons_C_UnbindPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindPartyMemberOnSetDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMiniMapIconPartyMember_C*                   PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::BindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindPartyMemberOnSetDead");
		
		UMiniMapIcons_C_BindPartyMemberOnSetDead_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMemberOnSetDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMiniMapIconPartyMember_C*                   PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::UnbindPartyMemberOnSetDead(class UMiniMapIconPartyMember_C* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindPartyMemberOnSetDead");
		
		UMiniMapIcons_C_UnbindPartyMemberOnSetDead_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.CustomEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMiniMapIconPartyMember_C*                   PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIcons_C::CustomEvent_2(class UMiniMapIconPartyMember_C* PartyMember, bool IsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.CustomEvent_2");
		
		UMiniMapIcons_C_CustomEvent_2_Params params {};
		params.PartyMember = PartyMember;
		params.IsDead = IsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindQuest
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindQuest");
		
		UMiniMapIcons_C_BindQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnAcceptQuestDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EAcceptedQuestErrorCode                            ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          AcceptedQuestInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMiniMapIcons_C::OnAcceptQuestDelegate_Event_1(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnAcceptQuestDelegate_Event_1");
		
		UMiniMapIcons_C_OnAcceptQuestDelegate_Event_1_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		params.RetCode = RetCode;
		params.AcceptedQuestInfo = AcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindOnSaveMapPinInfos");
		
		UMiniMapIcons_C_BindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnAcceptedQuestListDelegete_Event_1
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnAcceptedQuestListDelegete_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnAcceptedQuestListDelegete_Event_1");
		
		UMiniMapIcons_C_OnAcceptedQuestListDelegete_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCancelQuestDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::OnCancelQuestDelegate_Event_1(bool Result, int32_t QuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCancelQuestDelegate_Event_1");
		
		UMiniMapIcons_C_OnCancelQuestDelegate_Event_1_Params params {};
		params.Result = Result;
		params.QuestIndex = QuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnCompleteQuestDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            QuestIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCompleteResult                               CompleteResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBMailRewardData                           MailRewardData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMiniMapIcons_C::OnCompleteQuestDelegate_Event_1(int32_t RetCode, int32_t QuestIndex, EQuestCompleteResult CompleteResult, const struct FSBMailRewardData& MailRewardData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnCompleteQuestDelegate_Event_1");
		
		UMiniMapIcons_C_OnCompleteQuestDelegate_Event_1_Params params {};
		params.RetCode = RetCode;
		params.QuestIndex = QuestIndex;
		params.CompleteResult = CompleteResult;
		params.MailRewardData = MailRewardData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnUpdateQuestProgressDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetCode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAcceptedQuestInfo                          PrevAcceptedQuestInfo                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMiniMapIcons_C::OnUpdateQuestProgressDelegate_Event_1(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnUpdateQuestProgressDelegate_Event_1");
		
		UMiniMapIcons_C_OnUpdateQuestProgressDelegate_Event_1_Params params {};
		params.Result = Result;
		params.RetCode = RetCode;
		params.PrevAcceptedQuestInfo = PrevAcceptedQuestInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnQuestListDelegete_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FUnlockedQuestInfo>                  QuestList                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMiniMapIcons_C::OnQuestListDelegete_Event_1(TArray<struct FUnlockedQuestInfo> QuestList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnQuestListDelegete_Event_1");
		
		UMiniMapIcons_C_OnQuestListDelegete_Event_1_Params params {};
		params.QuestList = QuestList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnInitMapPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::OnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnInitMapPin");
		
		UMiniMapIcons_C_OnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindQuest
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindQuest");
		
		UMiniMapIcons_C_UnbindQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindPin");
		
		UMiniMapIcons_C_UnbindPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindPin");
		
		UMiniMapIcons_C_BindPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindOnInitMapPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindOnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindOnInitMapPin");
		
		UMiniMapIcons_C_BindOnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindOnInitMapPin
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindOnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindOnInitMapPin");
		
		UMiniMapIcons_C_UnbindOnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnClassChangeNotify_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMiniMapIcons_C::OnClassChangeNotify_Event_1(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnClassChangeNotify_Event_1");
		
		UMiniMapIcons_C_OnClassChangeNotify_Event_1_Params params {};
		params.InRetCode = InRetCode;
		params.bInIsExpiredStickerWeapons = bInIsExpiredStickerWeapons;
		params.InExpiredStickerWeaponUniqueIds = InExpiredStickerWeaponUniqueIds;
		params.InDirtyExpiredEquipmentData = InDirtyExpiredEquipmentData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnGetMyCharacterInfo_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIcons_C::OnGetMyCharacterInfo_Event_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnGetMyCharacterInfo_Event_1");
		
		UMiniMapIcons_C_OnGetMyCharacterInfo_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindCommonComponent
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindCommonComponent");
		
		UMiniMapIcons_C_BindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindCommonComponent
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindCommonComponent");
		
		UMiniMapIcons_C_UnbindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.OnSaveQuestCheckList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMiniMapIcons_C::OnSaveQuestCheckList(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.OnSaveQuestCheckList");
		
		UMiniMapIcons_C_OnSaveQuestCheckList_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindStepList
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindStepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindStepList");
		
		UMiniMapIcons_C_BindStepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindStepList
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindStepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindStepList");
		
		UMiniMapIcons_C_UnbindStepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.CustomEvent_3");
		
		UMiniMapIcons_C_CustomEvent_3_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindOnSaveMapPinInfos");
		
		UMiniMapIcons_C_UnbindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.BindFieldStatus
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::BindFieldStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.BindFieldStatus");
		
		UMiniMapIcons_C_BindFieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.UnbindFieldStatus
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::UnbindFieldStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.UnbindFieldStatus");
		
		UMiniMapIcons_C_UnbindFieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.CustomEvent_4
	 * 		Flags  -> ()
	 */
	void UMiniMapIcons_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.CustomEvent_4");
		
		UMiniMapIcons_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MiniMapIcons.MiniMapIcons_C.ExecuteUbergraph_MiniMapIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMiniMapIcons_C::ExecuteUbergraph_MiniMapIcons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MiniMapIcons.MiniMapIcons_C.ExecuteUbergraph_MiniMapIcons");
		
		UMiniMapIcons_C_ExecuteUbergraph_MiniMapIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMiniMapIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMiniMapIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MiniMapIcons.MiniMapIcons_C");
		return ptr;
	}

}


