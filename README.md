#[Stanford School of Engineering - Jumpstart Academic (SoE-JSA)](https://github.com/SU-SWS/soe-jsa)
##### Version: 7.x-4.4

Maintainers: [cjwest](https://github.com/cjwest), [sherakama](https://github.com/sherakama)

[Changelog.txt](CHANGELOG.txt)

This module contains code for the SoE-JSA product. Currently it is a container for other sub modules but will be the place for future additions outside of the installation profile.


Sub Modules
---

**[SoE-JSA Related Page Layout](modules/soe_jsa_related_page_layout)**
This module contains a context that provides page layout options for related content.

**[SoE-JSA Upcoming Event Page Layout](modules/soe_jsa_related_events_upcoming_layout)**
This module contains a context for the upcoming events page that provides page layout options for related content.

**[Stanford Person Grid View](modules/stanford_person_grid_view)**
This module contains a grid view for displaying person profiles.

Installation
---
When enabling the submodules (listed above) check that the dependencies are met, since each submodule depends on one or more other Stanford feature modules. For example, to install [Stanford Related Person](https://github.com/SU-SWS/stanford_related_content/tree/7.x-1.x/modules/stanford_related_person) on an existing soe_jsa site:

1. Install this module like any other module. [See Drupal Documentation](https://drupal.org/documentation/install/modules-themes/modules-7)
2.  Install and enable [Stanford Related Content](https://github.com/SU-SWS/stanford_related_content) and [Stanford Related Person](https://github.com/SU-SWS/stanford_related_content/tree/7.x-1.x/modules/stanford_related_person) 
2. Enable the SoE-JSA submodules: [Stanford Person Grid View](modules/stanford_person_grid_view), [SoE-JSA Related Page Layout](modules/soe_jsa_related_page_layout), and [SoE-JSA Upcoming Event Page Layout](modules/soe_jsa_related_events_upcoming_layout)

Configuration
---

Using the dependencies from both the Related Page Layout and the Upcoming Event Page Layout sub-modules, when enabling both modules, all needed modules will be enabled.

Troubleshooting
---

If you are experiencing issues with this module try reverting the feature first. If you are still experiencing issues try posting an issue on the GitHub issues page.

Contribution / Collaboration
---

You are welcome to contribute functionality, bug fixes, or documentation to this module. If you would like to suggest a fix or new functionality you may add a new issue to the GitHub issue queue or you may fork this repository and submit a pull request. For more help please see [GitHub's article on fork, branch, and pull requests](https://help.github.com/articles/using-pull-requests)
