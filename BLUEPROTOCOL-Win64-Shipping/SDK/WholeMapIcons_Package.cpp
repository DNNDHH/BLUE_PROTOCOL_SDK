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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddNFTAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_NFTArea_C*                               NFTArea                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::AddNFTAreaIcon(class ABP_NFTArea_C* NFTArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddNFTAreaIcon");
		
		UWholeMapIcons_C_AddNFTAreaIcon_Params params {};
		params.NFTArea = NFTArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateNFTAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMiniMapIcons*                             InMiniMapIcons                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateNFTAreaIcon(class USBMiniMapIcons* InMiniMapIcons, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateNFTAreaIcon");
		
		UWholeMapIcons_C_OnCreateNFTAreaIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateWarpPointDungeonIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointDungeonIcon");
		
		UWholeMapIcons_C_OnCreateWarpPointDungeonIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestNPCIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            QuestID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestIconType                                     QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestCategory2                                    QuestCategory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateQuestNPCIcon(int32_t QuestID, EQuestIconType QuestType, EQuestCategory2 QuestCategory, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestNPCIcon");
		
		UWholeMapIcons_C_OnCreateQuestNPCIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestChallenge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBMiniMapIconType                                 IconType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateQuestChallenge(ESBMiniMapIconType IconType, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestChallenge");
		
		UWholeMapIcons_C_OnCreateQuestChallenge_Params params {};
		params.IconType = IconType;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreatePublicDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        RowName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreatePublicDungeonIcon(const struct FSBLocationInfo& LocationInfo, const class FName& RowName, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreatePublicDungeonIcon");
		
		UWholeMapIcons_C_OnCreatePublicDungeonIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddNamedEnemyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBMapIcon* UWholeMapIcons_C::AddNamedEnemyIcon(class ASBEnemyCharacter* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddNamedEnemyIcon");
		
		UWholeMapIcons_C_AddNamedEnemyIcon_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateDungeonIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateDungeonIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateDungeonIcon");
		
		UWholeMapIcons_C_OnCreateDungeonIcon_Params params {};
		params.LocationInfo = LocationInfo;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateRaidIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBLocationInfo                             LocationInfo                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateRaidIcon(const struct FSBLocationInfo& LocationInfo, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateRaidIcon");
		
		UWholeMapIcons_C_OnCreateRaidIcon_Params params {};
		params.LocationInfo = LocationInfo;
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddBuddyIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBEnemyCharacter*                           InActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class USBMapIcon* UWholeMapIcons_C::AddBuddyIcon(class ASBEnemyCharacter* InActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddBuddyIcon");
		
		UWholeMapIcons_C_AddBuddyIcon_Params params {};
		params.InActor = InActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddInterruptQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBInterruptQuestInstance*                   InInstance                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::AddInterruptQuestIcon(class ASBInterruptQuestInstance* InInstance, const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddInterruptQuestIcon");
		
		UWholeMapIcons_C_AddInterruptQuestIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnDeletePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnDeletePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnDeletePartyMemberIcon");
		
		UWholeMapIcons_C_OnDeletePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreatePartyMemberIcon
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnCreatePartyMemberIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreatePartyMemberIcon");
		
		UWholeMapIcons_C_OnCreatePartyMemberIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateFacilityIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InProfileId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBFacilityType                                    InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterProfileLocationData             InLocationData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateFacilityIcon(const class FName& InProfileId, ESBFacilityType InType, const struct FSBCharacterProfileLocationData& InLocationData, const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateFacilityIcon");
		
		UWholeMapIcons_C_OnCreateFacilityIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestIcon
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnCreateQuestIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestIcon");
		
		UWholeMapIcons_C_OnCreateQuestIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestAreaIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRange                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   InAreaSize                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                InColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateQuestAreaIcon(const struct FVector& InLocation, float InRange, const struct FVector2D& InAreaSize, const struct FLinearColor& InColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateQuestAreaIcon");
		
		UWholeMapIcons_C_OnCreateQuestAreaIcon_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PortalName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateWarpPointIcon(const class FString& LevelName, const class FString& PortalName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateWarpPointIcon");
		
		UWholeMapIcons_C_OnCreateWarpPointIcon_Params params {};
		params.LevelName = LevelName;
		params.PortalName = PortalName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.SetVisiblePinComment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWholeMapIcons_C::SetVisiblePinComment(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.SetVisiblePinComment");
		
		UWholeMapIcons_C_SetVisiblePinComment_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreatePin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMapPinInfo                                 MapPinInfo                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     InWorldPosition                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreatePin(const struct FMapPinInfo& MapPinInfo, const struct FVector& InWorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreatePin");
		
		UWholeMapIcons_C_OnCreatePin_Params params {};
		params.MapPinInfo = MapPinInfo;
		params.InWorldPosition = InWorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateCampIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateCampIcon(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateCampIcon");
		
		UWholeMapIcons_C_OnCreateCampIcon_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateFishingIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::OnCreateFishingIcon(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateFishingIcon");
		
		UWholeMapIcons_C_OnCreateFishingIcon_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnCreateShortPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnCreateShortPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnCreateShortPin");
		
		UWholeMapIcons_C_OnCreateShortPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddQuestIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InQuestIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::AddQuestIcon(int32_t InQuestIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddQuestIcon");
		
		UWholeMapIcons_C_AddQuestIcon_Params params {};
		params.InQuestIndex = InQuestIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.AddIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 IconWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::AddIcon(class UClass* Class, int32_t ZOrder, class UUserWidget** IconWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.AddIcon");
		
		UWholeMapIcons_C_AddIcon_Params params {};
		params.Class = Class;
		params.ZOrder = ZOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconWidget != nullptr)
			*IconWidget = params.IconWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnUnbind");
		
		UWholeMapIcons_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnBind
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnBind");
		
		UWholeMapIcons_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindQuest
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindQuest");
		
		UWholeMapIcons_C_UnbindQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnClassChangeNotify_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInIsExpiredStickerWeapons                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FString>                              InExpiredStickerWeaponUniqueIds                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FSBExpiredEquipmentData                     InDirtyExpiredEquipmentData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWholeMapIcons_C::OnClassChangeNotify_Event_1(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnClassChangeNotify_Event_1");
		
		UWholeMapIcons_C_OnClassChangeNotify_Event_1_Params params {};
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
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnGetMyCharacterInfo_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWholeMapIcons_C::OnGetMyCharacterInfo_Event_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnGetMyCharacterInfo_Event_1");
		
		UWholeMapIcons_C_OnGetMyCharacterInfo_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindCommonComponent
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindCommonComponent");
		
		UWholeMapIcons_C_BindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindCommonComponent
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindCommonComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindCommonComponent");
		
		UWholeMapIcons_C_UnbindCommonComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnSaveQuestCheckList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWholeMapIcons_C::OnSaveQuestCheckList(bool bWasSuccessful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnSaveQuestCheckList");
		
		UWholeMapIcons_C_OnSaveQuestCheckList_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindStepList
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindStepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindStepList");
		
		UWholeMapIcons_C_BindStepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindStepList
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindStepList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindStepList");
		
		UWholeMapIcons_C_UnbindStepList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::CustomEvent_3(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.CustomEvent_3");
		
		UWholeMapIcons_C_CustomEvent_3_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindFieldStatus
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindFieldStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindFieldStatus");
		
		UWholeMapIcons_C_BindFieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindFieldStatus
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindFieldStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindFieldStatus");
		
		UWholeMapIcons_C_UnbindFieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.RequestCreateFieldStatus
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::RequestCreateFieldStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.RequestCreateFieldStatus");
		
		UWholeMapIcons_C_RequestCreateFieldStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindPartyMember
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindPartyMember");
		
		UWholeMapIcons_C_BindPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMember
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindPartyMember()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMember");
		
		UWholeMapIcons_C_UnbindPartyMember_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnPartyMemberUpdate_Event_1
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnPartyMemberUpdate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnPartyMemberUpdate_Event_1");
		
		UWholeMapIcons_C_OnPartyMemberUpdate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindQuest
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindQuest");
		
		UWholeMapIcons_C_BindQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindPartyMemberOnSetDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIconPartyMember_C*                          PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::BindPartyMemberOnSetDead(class UIconPartyMember_C* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindPartyMemberOnSetDead");
		
		UWholeMapIcons_C_BindPartyMemberOnSetDead_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMemberOnSetDead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UIconPartyMember_C*                          PartyMember                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::UnbindPartyMemberOnSetDead(class UIconPartyMember_C* PartyMember)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindPartyMemberOnSetDead");
		
		UWholeMapIcons_C_UnbindPartyMemberOnSetDead_Params params {};
		params.PartyMember = PartyMember;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBMapPartyMemberIcon*                       InPartyMemberIcon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWholeMapIcons_C::CustomEvent_1(class USBMapPartyMemberIcon* InPartyMemberIcon, bool IsDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.CustomEvent_1");
		
		UWholeMapIcons_C_CustomEvent_1_Params params {};
		params.InPartyMemberIcon = InPartyMemberIcon;
		params.IsDead = IsDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindOnInitMapPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindOnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindOnInitMapPin");
		
		UWholeMapIcons_C_UnbindOnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindOnInitMapPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindOnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindOnInitMapPin");
		
		UWholeMapIcons_C_BindOnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.OnInitMapPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::OnInitMapPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.OnInitMapPin");
		
		UWholeMapIcons_C_OnInitMapPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindPin");
		
		UWholeMapIcons_C_BindPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindPin
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindPin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindPin");
		
		UWholeMapIcons_C_UnbindPin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.BindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::BindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.BindOnSaveMapPinInfos");
		
		UWholeMapIcons_C_BindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.UnbindOnSaveMapPinInfos
	 * 		Flags  -> ()
	 */
	void UWholeMapIcons_C::UnbindOnSaveMapPinInfos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.UnbindOnSaveMapPinInfos");
		
		UWholeMapIcons_C_UnbindOnSaveMapPinInfos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESBMapErrorCode                                    ErrorCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::CustomEvent(bool Result, ESBMapErrorCode ErrorCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.CustomEvent");
		
		UWholeMapIcons_C_CustomEvent_Params params {};
		params.Result = Result;
		params.ErrorCode = ErrorCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WholeMapIcons.WholeMapIcons_C.ExecuteUbergraph_WholeMapIcons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWholeMapIcons_C::ExecuteUbergraph_WholeMapIcons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WholeMapIcons.WholeMapIcons_C.ExecuteUbergraph_WholeMapIcons");
		
		UWholeMapIcons_C_ExecuteUbergraph_WholeMapIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWholeMapIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWholeMapIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WholeMapIcons.WholeMapIcons_C");
		return ptr;
	}

}


