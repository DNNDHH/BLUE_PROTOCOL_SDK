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
	 * BlueprintGeneratedClass BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_CommandMenuChildrenSwitcher_C : public UInterface
	{
	public:
		void SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName);
		void TermRequesTiming();
		void SwitchOut();
		void SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
