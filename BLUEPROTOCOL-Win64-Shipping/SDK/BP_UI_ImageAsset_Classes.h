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
	 * BlueprintGeneratedClass BP_UI_ImageAsset.BP_UI_ImageAsset_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_UI_ImageAsset_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetUIImageAsset_Dungeon_ById(const class FName& DungeonId, class UObject* __WorldContext);
		void GetUIImageAsset_Dungeon(const class FName& ImageName, class UObject* __WorldContext);
		void GetUIImageAsset(class UDataTable* DataTable, const class FName& ImageName, class UObject* __WorldContext, bool* Exist);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
