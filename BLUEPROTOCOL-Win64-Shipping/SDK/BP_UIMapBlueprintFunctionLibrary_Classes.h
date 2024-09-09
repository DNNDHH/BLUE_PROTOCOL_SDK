#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_UIMapBlueprintFunctionLibrary.BP_UIMapBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UIMapBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CheckEventMapChange(const struct FSBMapBGConfigTableRow& InMapBGConfig, class UObject* __WorldContext);
		void IsPublicDungeonDirectWarp(ESBLocationInfoType Type, const class FName& LocationId, class UObject* __WorldContext, bool* IsOpen);
		void IsEnableFieldStatus(const struct FDataTableRowHandle& InFieldStatusDataTable, class UObject* __WorldContext, bool* IsEnable);
		void IsViewHUDQuest(int32_t QuestIndex, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
