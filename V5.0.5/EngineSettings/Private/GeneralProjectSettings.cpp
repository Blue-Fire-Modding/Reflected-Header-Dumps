#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("Robi Studios");
    this->CompanyDistinguishedName = TEXT("Robi Studios SAS");
    this->CopyrightNotice = TEXT("Copyright Robi Studios S.A.S.");
    this->Description = TEXT("Main Dev Branch");
    this->Homepage = TEXT("robistudios.com");
    this->ProjectName = TEXT("Blue Fire");
    this->ProjectVersion = TEXT("6.1.0");
    this->SupportContact = TEXT("contact@robistudios.com");
    this->ProjectDisplayedTitle = INVTEXT("Blue Fire");
    this->ProjectDebugTitleInfo = INVTEXT("Blue Fire Debug");
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bStartInAR = false;
    this->bSupportAR = false;
    this->bAllowWindowResize = true;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
}

